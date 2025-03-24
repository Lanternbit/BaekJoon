#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string ans;

    cin >> ans;

    while(n > 1) {
        string sentence;
        cin >> sentence;

        for (int i = 0; i < ans.length(); i++) if (ans[i] != sentence[i]) ans[i] = '?';

        n--;
    }

    cout << ans;
}