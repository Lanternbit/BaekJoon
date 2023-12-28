#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int arr[1000];
	int count = 1;
	int order = 0;
	int zero = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	while (true) {
		if (arr[order] != 0) {
			if (count != k) {
				count++;
			}
			else {
				if (zero == 0) cout << "<" << arr[order];
				else cout << ", " << arr[order];

				arr[order] = 0;
				count = 1;
				zero++;

				if (zero == n) break;
			}
		}

		if (order == n - 1) order = 0;
		else order++;
	}

	cout << ">" << "\n";
}