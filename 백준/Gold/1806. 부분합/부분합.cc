#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;

    cin >> n >> s;

    vector<int> num(n);

    for (int i = 0; i < n; i++) cin >> num[i];

    int start = 0;
    int end = 0;
    int minlen = 0x7fffffff;
    int sum = 0;

    while (end < n) {
        sum += num[end];

        while (sum >= s) {
            int len = end - start + 1;

            minlen = min(minlen, len);

            sum -= num[start];
            start++;
        }

        end++;
    }

    if (minlen == 0x7fffffff) cout << 0;
    else cout << minlen;
}