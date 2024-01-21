#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[2][1000] = { 0 };
	int n;
	int max = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[0][i];

		for (int j = 0; j < i; j++) {
			if (a[0][i] < a[0][j] && a[1][i] < a[1][j]) a[1][i] = a[1][j];
		}

		a[1][i]++;

		if (max < a[1][i]) max = a[1][i];
	}

	cout << max << "\n";
}