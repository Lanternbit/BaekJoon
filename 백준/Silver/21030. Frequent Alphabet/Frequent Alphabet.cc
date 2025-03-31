#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int m[26] = { 0 };

    for (int i = 0; i < n; i++) {
        m[int(s[i]) - 97]++;
        if (s[i] != t[i]) m[int(t[i]) - 97]++;
    }

    int ans = 0;

    for (int i = 0; i < 26; i++) {
        if (ans < m[i]) ans = m[i];
    }

    cout << ans;
}  