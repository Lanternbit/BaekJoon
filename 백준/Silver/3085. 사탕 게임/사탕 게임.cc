#include<iostream>
using namespace std;

void swap(char& a, char& b) {
	char temp;
	temp = a;
	a = b;
	b = temp;
}

int check(char a[][50], int n) {
	int c[4] = { 0 };
	int m = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 'C') c[0]++;
			else c[0] = 0;

			if (a[i][j] == 'P') c[1]++;
			else c[1] = 0;

			if (a[i][j] == 'Z') c[2]++;
			else c[2] = 0;

			if (a[i][j] == 'Y') c[3]++;
			else c[3] = 0;

			for (int k = 0; k < 4; k++) {
				if (m < c[k]) m = c[k];
			}
		}

		for (int j = 0; j < 4; j++) {
			c[j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j][i] == 'C') c[0]++;
			else c[0] = 0;

			if (a[j][i] == 'P') c[1]++;
			else c[1] = 0;

			if (a[j][i] == 'Z') c[2]++;
			else c[2] = 0;

			if (a[j][i] == 'Y') c[3]++;
			else c[3] = 0;

			for (int k = 0; k < 4; k++) {
				if (m < c[k]) m = c[k];
			}
		}

		for (int j = 0; j < 4; j++) {
			c[j] = 0;
		}
	}

	return m;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char a[50][50];
	int n;
	int max = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n; j++) {
			swap(a[i][j], a[i + 1][j]);
			if (max < check(a, n)) max = check(a, n);
			swap(a[i][j], a[i + 1][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			swap(a[i][j], a[i][j + 1]);
			if (max < check(a, n)) max = check(a, n);
			swap(a[i][j], a[i][j + 1]);
		}
	}

	cout << max << "\n";
}