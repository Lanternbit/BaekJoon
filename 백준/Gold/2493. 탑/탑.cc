#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<pair<int, int>> tower;
    
    tower.push({100000001, 0});

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;

        while (tower.top().first < num) tower.pop();
        
        if (tower.top().first > num) {
            cout << tower.top().second << " ";
            tower.push({num, i});
        }
    }
}