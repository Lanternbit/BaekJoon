#include<iostream>
#include<vector>
using namespace std;

vector <int> rem;

int z(int pos, int r) {
	pos = rem[r];
	rem.push_back(pos);

	return pos;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	rem.push_back(1);

	cin >> n >> m;
	int pos = 1;

	while (m--) {
		int h;
		long long r;

		cin >> h >> r;

		if (h == 1) {
			pos = (pos + r) % n;
			if (pos == 0) pos = n;
			rem.push_back(pos);
		}
		else if (h == 2) {
			r %= n;
			if (pos - r <= 0) pos = n + (pos - r);
			else pos -= r;
			rem.push_back(pos);
		}
		else pos = z(pos, r);
	}

	cout << rem.back() << "\n";
}