#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;

    while (n--) {
        string ab;
        cin >> ab;

        stack<char> s;
        s.push(ab[0]);

        for (int i = 1; i < ab.length(); i++) {
            if (s.size() != 0 && s.top() == ab[i]) s.pop();
            else s.push(ab[i]);
        }

        if (s.empty() == 1) ans++;
    }

    cout << ans;
}