#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	int arr[5] = { 0 };

	while (t != 0) {
		cin >> t;

		if (t == 0) break;

		int k = t;
		int i = 0;

		while (k != 0) {
			arr[i] = k % 10;
			k /= 10;
			i++;
		}

		for (int j = 0; j < i; j++) {
			if (arr[j] != arr[(i - 1) - j]) {
				k = 1;
			}
		}

		if (k == 1) cout << "no" << "\n";
		else cout << "yes" << "\n";
	}
}