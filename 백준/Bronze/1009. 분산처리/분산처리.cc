#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		int a, b;
		int ans = 1;

		cin >> a >> b;

		for (int i = 0; i < b; i++) {
			ans *= a;
			ans %= 10;
		}

		if (ans == 0) cout << 10 << "\n";
		else cout << ans << "\n";
	}
}