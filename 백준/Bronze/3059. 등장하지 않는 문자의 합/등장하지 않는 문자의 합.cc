#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m;
    
    cin >> m;
    
    while(m--){
        string s;
        int sum = 2015;
        bool alpahbet[26] = {0};

        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            if (alpahbet[s[i]-65] == 0) {
                sum -= s[i];
                alpahbet[s[i]-65] = true;
            }
        }

        cout << sum << "\n";
    }
}