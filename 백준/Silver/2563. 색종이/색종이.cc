#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int p[100][100] = { 0 };

	int t;
	int black = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int x, y;

		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				p[j - 1][k - 1] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (p[i][j] == 1) black++;
		}
	}

	cout << black << "\n";
}