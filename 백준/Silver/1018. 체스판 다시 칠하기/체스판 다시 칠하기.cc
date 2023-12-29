#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r, l;
	int wch = 0;
	int bch = 0;
	int min = 64;

	cin >> l >> r;

	vector<vector<char>> white;
	vector<vector<char>> black;

	for (int i = 0; i < l; i++) {
		white.push_back(vector<char>());

		for (int j = 0; j < r; j++) {
			char c;

			cin >> c;

			white[i].push_back(c);
		}
	}

	black = white;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < r; j++) {
			if ((i + j) % 2 == 0) {
				if (white[i][j] != 'W') white[i][j] = 'C';
			}
			else {
				if (white[i][j] != 'B') white[i][j] = 'C';
			}
		}
	}

	for (int i = 0; i < l - 7; i++) {
		for (int j = 0; j < r - 7; j++) {
			wch = 0;

			for (int k = i; k < i + 8; k++) {
				for (int m = j; m < j + 8; m++) {
					if (white[k][m] == 'C') wch++;
				}
			}

			if (min > wch) {
				min = wch;
			}
		}
	}

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < r; j++) {
			if ((i + j) % 2 == 0) {
				if (black[i][j] != 'B') black[i][j] = 'C';
			}
			else {
				if (black[i][j] != 'W') black[i][j] = 'C';
			}
		}
	}

	for (int i = 0; i < l - 7; i++) {
		for (int j = 0; j < r - 7; j++) {
			bch = 0;

			for (int k = i; k < i + 8; k++) {
				for (int m = j; m < j + 8; m++) {
					if (black[k][m] == 'C') bch++;
				}
			}

			if (min > bch) {
				min = bch;
			}
		}
	}

	cout << min << "\n";
}