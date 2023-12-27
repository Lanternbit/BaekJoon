#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int a[100] = { 0 };

	cin >> n >> m;

	for(int t = 0; t < m; t++) {
		int i, j, k;
		
		cin >> i >> j >> k;

		for (int u = i; u <= j; u++) {
			a[u - 1] = k;
		}
	}

	for (int t = 0; t < n; t++) {
		cout << a[t] << " ";
	}
}