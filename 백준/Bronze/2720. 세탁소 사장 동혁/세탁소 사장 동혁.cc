#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int Q = 25;
	const int D = 10;
	const int N = 5;
	const int P = 1;
	
	int t, c;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> c;

		int a[4] = { 0 };

		if (c / Q > 0) {
			a[0] = c / Q;
			c %= Q;
		}
		
		if (c / D > 0) {
			a[1] = c / D;
			c %= D;
		}

		if (c / N > 0) {
			a[2] = c / N;
			c %= N;
		}

		if (c / P > 0) {
			a[3] = c / P;
			c %= P;
		}

		for (int j = 0; j < 4; j++) {
			cout << a[j] << " ";
		}

		cout << "\n";
	}
}