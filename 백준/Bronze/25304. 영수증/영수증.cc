#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, n;
	int a[100];
	int b[100];
	int cost = 0;

	cin >> x >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];

		cost += a[i] * b[i];
	}

	if (x == cost) cout << "Yes" << "\n";
	else cout << "No" << "\n";
}