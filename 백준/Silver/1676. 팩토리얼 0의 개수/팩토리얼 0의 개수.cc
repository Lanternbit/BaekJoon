#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int x = 1;
	int t = 0;
	int f = 0;

	cin >> n;

	if (n != 0) {
		for (int i = 1; i <= n; i++) {
			/*x *= i;

			while (x % 10 == 0) {
				x /= 10;
				ans++;
			}*/
			x = i;

			while (x / 2 != 0 && x % 2 == 0) {
				x /= 2;
				t++;
			}

			while (x / 5 != 0 && x % 5 == 0) {
				x /= 5;
				f++;
			}
		}
	}

	if (t >= f) cout << f << "\n";
	else cout << t << "\n";
}