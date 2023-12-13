#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int m = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int number;
		int c = 0;

		cin >> number;

		if (number == 1) c = 1;
		else {
			for (int j = 2; j < number; j++) {
				if (number % j == 0) {
					c = 1;
					break;
				}
			}
		}

		if (c == 0) m++;
	}

	cout << m << "\n";
}