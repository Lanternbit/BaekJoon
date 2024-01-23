#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int dp[16] = { 0 };

	cin >> n;

	dp[1] = 3;

	for (int i = 2; i <= n / 2; i++) {
		int sum = dp[i - 1] * 3 + 2;
		int t = 1;

		while (i - t != 1) {
			sum += dp[t] * 2;
			t++;
		}

		dp[i] = sum;
	}

	if (n % 2 == 1) cout << 0 << "\n";
	else cout << dp[n / 2] << "\n";
}