#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		int n;
		int arr[100000] = { 0 };
		int t = 0;
		int sum = 0;

		cin >> n;

		if (n == -1) break;

		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				arr[t] = i;
				t++;
			}
		}

		for (int i = 0; i <= n / 2; i++) {
			sum += arr[i];
		}

		if (sum == n) {
			cout << n << " = 1";

			for (int i = 1; i < t; i++) {
				cout << " + " << arr[i];
			}

			cout << "\n";
		}
		else {
			cout << n << " is NOT perfect." << "\n";
		}
	}
}