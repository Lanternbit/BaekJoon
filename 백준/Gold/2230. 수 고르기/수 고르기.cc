#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<int> num(n);

    for (int i = 0; i < n; i++) cin >> num[i];

    sort(num.begin(), num.end());

    int start = 0;
    int end = 0;
    int ans = 0x7fffffff;

    while(end < n) {
        if (start >= end || num[end] - num[start] < m) end++;
        else {
            ans = min(ans, num[end] - num[start]);
            start++;
        }
    }

    cout << ans;
}