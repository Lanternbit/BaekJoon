#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lower_idx(int n, vector<int>& a, int num) {
    int start = 0;
    int end = n;
    
    while(start < end) {
        int mid = (start + end) / 2;
        if (a[mid] >= num) end = mid;
        else start = mid + 1;
    }

    return start;
}

int upper_idx(int n, vector<int>& a, int num) {
    int start = 0;
    int end = n;
    
    while(start < end) {
        int mid = (start + end) / 2;
        if (a[mid] > num) end = mid;
        else start = mid + 1;
    }

    return start;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int m;

    cin >> m;

    for (int i = 0; i < m; i++) {
        int num;

        cin >> num;

        int low = lower_idx(n, a, num);
        int high = upper_idx(n, a, num);

        cout << high - low << " ";
    }
}