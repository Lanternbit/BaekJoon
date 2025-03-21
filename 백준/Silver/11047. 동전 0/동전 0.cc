#include<iostream>
#include<vector>
using namespace std;

vector<int> A;
int ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    while(n--) {
        int a;

        cin >> a;

        A.push_back(a);
    }

    for (int i = A.size() - 1; i >= 0; i--) {
        if (k / A[i] != 0) {
            ans += k / A[i];
            k %= A[i];
        }
    }

    cout << ans << "\n";
}