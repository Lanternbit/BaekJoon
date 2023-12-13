#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int m = 0;

	cin >> n;

	if (n == 1) cout << "1" << "\n";
	else {
		n = n - 1;

		while (n > 0) {
			n = n - (6 * m);
			m++;
		}

		cout << m << "\n";
	}
}