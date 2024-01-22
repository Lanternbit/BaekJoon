#include<iostream>
#include<algorithm>
using namespace std;

int a[100001];
int d[2][100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = a[0];

	for (int i = 0; i < n; i++) {
		d[0][i] = a[i];
		d[1][i] = a[i];

		if (i == 0) continue;

		d[0][i] = max(d[0][i - 1] + a[i], a[i]);
		d[1][i] = max(d[0][i - 1], d[1][i - 1] + a[i]);
		ans = max({ ans, d[0][i], d[1][i] });
	}

	cout << ans << "\n";
}