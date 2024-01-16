#include<iostream>
#include<algorithm>
using namespace std;

int s[3][100000] = { 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	int n;

	cin >> t;

	while (t--) {
		cin >> n;
		
		for (int i = 0; i < 2 * n; i++) {
			if (i < n) cin >> s[0][i];
			else cin >> s[1][i - n];
		}

		for (int i = 1; i < n; i++) {
			s[0][i] += max(s[1][i - 1], s[2][i - 1]);
			s[1][i] += max(s[0][i - 1], s[2][i - 1]);
			s[2][i] = max({ s[0][i - 1], s[1][i - 1], s[2][i - 1] });
		}

		cout << max(s[0][n - 1], s[1][n - 1]) << "\n";
	}
}