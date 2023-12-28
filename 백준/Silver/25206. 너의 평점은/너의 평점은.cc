#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a[20][3];
	double ans = 0;
	double d = 0;

	for (int i = 0; i < 20; i++) {
		cin >> a[i][0] >> a[i][1] >> a[i][2];

		double r = 0;

		if (a[i][2][0] == 'A') {
			r += 4;
		}
		else if (a[i][2][0] == 'B') {
			r += 3;
		}
		else if (a[i][2][0] == 'C') {
			r += 2;
		}
		else if (a[i][2][0] == 'D') {
			r += 1;
		}

		if (a[i][2][1] == '+') {
			r += 0.5;
		}

		if (a[i][2][0] != 'P') {
			ans += (double(a[i][1][0]) - 48) * r;
			d += double(a[i][1][0]) - 48;
		}
	}

	cout << fixed;
	cout.precision(6);

	if (d != 0) {
		ans /= d;
		cout << ans << "\n";
	}
	else cout << 0 << "\n";

}