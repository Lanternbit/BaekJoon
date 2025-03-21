#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;

    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        int num;

        cin >> num;

        int start = 0;
        int end = n - 1;
        bool check = 0;

        while(start <= end) {
            int mid = (start + end) / 2;
            
            if (a[mid] > num) end = mid - 1;
            else if (a[mid] < num) start = mid + 1;
            else if (a[mid] == num) {
                cout << "1\n";
                check = true;
                break;
            }
        }
        
        if (check == false) cout << "0\n";
    }
}