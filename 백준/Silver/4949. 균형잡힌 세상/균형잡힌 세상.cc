#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<bool> check;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    while (getline(cin, s)) {
        if (s.length() == 1 && s[0] == '.') return 0;

        int small = 0;
        int big = 0;

        for (int i = 0; i < s.length(); i++) {  
            if (s[i] == '[') {
                check.push_back(true);
                big++;
            }
            else if (s[i] == ']') {
                if (big == 0 || check.back() != true) {
                    big--;
                    break;
                }
                else {
                    big--;
                    check.pop_back();
                }
            }
    
            if (s[i] == '(') {
                check.push_back(false);
                small++;
            }
            else if (s[i] == ')') {
                if (small == 0 || check.back() != false) {
                    small--;
                    break;
                }
                else {
                    small--;
                    check.pop_back();
                }
            }
        }

        if (big == 0 && small == 0) cout << "yes\n";
        else cout << "no\n";

        check.clear();
    }
}