#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	const int max = 1000001;

	cin >> m >> n;

	vector<bool> v(n + 1);

	for (int i = 2; i <= n; i++) {
		if (!v[i]) {
			for (int j = i * 2; j <= n; j += i) {
				v[j] = true;
			}
		}
	}

	for (int i = m; i <= n; i++) {
		if (i != 1 && !v[i]) cout << i << "\n";
	}
}