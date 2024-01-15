#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int a[10] = { 0 };
	int ans = 0;

	cin >> n;

	for (int i = 0; i < 10; i++) {
		a[i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < 10; j++) {
			a[j] += a[j - 1];

			if (a[j] > 10007) a[j] %= 10007;
		}
	}

	for (int i = 0; i < 10; i++) {
		ans += a[i];
	}

	cout << ans % 10007 << "\n";
}