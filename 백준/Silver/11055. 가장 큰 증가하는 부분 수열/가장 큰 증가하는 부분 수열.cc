#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int arr[2][1000] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[0][i];

		if (i == 0) arr[1][i] = arr[0][i];

		for (int j = 0; j < i; j++) {
			if (arr[0][i] > arr[0][j] && arr[1][i] < arr[1][j] + arr[0][i]) {
				arr[1][i] = arr[1][j] + arr[0][i];
			}
		}

		if (arr[1][i] == 0) arr[1][i] = arr[0][i];
	}

	int max = 0;

	for (int i = 0; i < n; i++) {
		if (max < arr[1][i]) max = arr[1][i];
	}

	cout << max << "\n";
}