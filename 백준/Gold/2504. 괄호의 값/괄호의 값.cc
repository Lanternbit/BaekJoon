#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<pair<int, int>> a;

pair<int, int> small(int layer, int num) {
    num *= a.top().second;
    a.pop();

    return {layer, num};
}

pair<int, int> equal(int layer, int num) {
    a.top().second += num;

    return {-1, 0};
}

pair<int, int> big(int layer, int num) {
    a.push({layer, num});

    return {-1, 0};
}

void cal(int layer, int num) {
    pair<int,int> x = {layer, num};
    while (x.first >= 0) {
        if (a.top().first > x.first) x = small(x.first, x.second);
        else if (a.top().first == x.first) x = equal(x.first, x.second);
        else x = big(x.first, x.second);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string ex;
    cin >> ex;

    stack<char> c; 

    bool check = true;
    a.push({0, 0});

    for (int i = 0; i < ex.length(); i++) {
        if (ex[i] == ')') {
            if (c.empty() == 0 && c.top() == '(') {
                c.pop();

                cal(c.size(), 2);
            }
            else {
                check = false;
                break;
            }
        }
        else if (ex[i] == ']') {
            if (c.empty() == 0 && c.top() == '[') {
                c.pop();
                
                cal(c.size(), 3);
            }
            else {
                check = false;
                break;
            }
        }
        else c.push(ex[i]);
    }

    if (check == false || c.size() != 0) cout << 0;
    else cout << a.top().second;
}