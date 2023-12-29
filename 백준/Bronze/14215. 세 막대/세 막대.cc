#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[6] = { 0 };

	for (int i = 0; i < 3; i++) {
		cin >> a[i];

		if (a[3] < a[i]) {
			a[5] = a[4];
			a[4] = a[3];
			a[3] = a[i];
		}
		else {
			a[5] = a[4];
			a[4] = a[i];
		}
	}

	if (a[4] + a[5] > a[3]) cout << a[3] + a[4] + a[5] << "\n";
	else cout << 2 * (a[4] + a[5]) - 1 << "\n";
}