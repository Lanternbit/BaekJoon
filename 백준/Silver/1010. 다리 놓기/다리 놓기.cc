#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (n > m/2) n = m - n;
        
        long long result = 1;
        
        for (int i = 1; i <= n; i++) {
            result = result * (m - i + 1) / i;
        }
        
        cout << result << "\n";
    }
}