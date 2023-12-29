#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int max_x = -10000;
	int max_y = -10000;
	int min_x = 10000;
	int min_y = 10000;

	cin >> n;

	if (n > 1) {
		for (int t = 0; t < n; t++) {
			int x, y;

			cin >> x >> y;

			if (x >= max_x) max_x = x;
			if (y >= max_y) max_y = y;
			if (x <= min_x) min_x = x;
			if (y <= min_y) min_y = y;
		}

		cout << (max_x - min_x) * (max_y - min_y) << "\n";
	}
	else cout << 0 << "\n";
}