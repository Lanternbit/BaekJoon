#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ans = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    vector<pair<int, int>> time(n);

    for (int i = 0; i < n; i++) cin >> time[i].second >> time[i].first;

    sort(time.begin(), time.end());

    int end = time[0].first;

    for (int i = 1; i < n; i++) {
        if (end <= time[i].second) {
            end = time[i].first;
            ans++;
        }
    }

    cout << ans << "\n";
}