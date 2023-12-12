#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int diff = 0;

	int h[8];

	for (int i = 0; i < 8; i++) {
		cin >> h[i];

		if (i > 1) {
			if (h[i] - h[i - 1] != h[i - 1] - h[i - 2]) {
				diff = 3;
				break;
			}
			else if (h[i] - h[i - 1] == h[i - 1] - h[i - 2] && h[i] - h[i - 1] == 1) diff = 1;
			else diff = 2;
		}
	}

	if (diff == 1) cout << "ascending" << "\n";
	else if (diff == 2) cout << "descending" << "\n";
	else cout << "mixed" << "\n";
}