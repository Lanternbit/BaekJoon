#include<iostream>
using namespace std;

int gcd(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		int m, n, x, y;
		int ans = -1;

		cin >> m >> n >> x >> y;

		int t = lcm(m, n);

		while (ans == -1) {
			if (x == y) ans = x;
			else if (x < y) x += m;
			else if (x > y) y += n;

			if (x > t || y > t) break;
		}

		cout << ans << "\n";
	}
}