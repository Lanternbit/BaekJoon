#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[3][1000] = { 0 };
	int n;
	int max = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[0][i];

		for (int j = 0; j < i; j++) {
			if (a[0][i] > a[0][j] && a[1][i] < a[1][j]) a[1][i] = a[1][j];
		}

		a[1][i]++;
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (a[0][i] > a[0][j] && a[2][i] < a[2][j]) a[2][i] = a[2][j];
		}

		a[2][i]++;
	}

	for (int i = 0; i < n; i++) {
		if (max < a[1][i] + a[2][i] - 1) max = a[1][i] + a[2][i] - 1;
	}

	cout << max << "\n";
}