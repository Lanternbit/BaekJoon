#include<iostream>
#include<string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string s;
    int ans = 0;
    
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ans++;
    }
    
    cout << ans << "\n";
}