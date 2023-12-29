#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;

	cin >> m >> n;

	int arr[10001];
	int min = 10000;
	int sum = 0;

	for (int i = m; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= (i / 2); j++) {
			if (arr[i] % j == 0) {
				arr[i] = 0;
				break;
			}
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] != 0 && i != 1) {
			if (arr[i] < min) min = arr[i];

			sum += arr[i];
		}
	}

	if (min == 10000) cout << -1 << "\n";
	else cout << sum << "\n" << min << "\n";
}