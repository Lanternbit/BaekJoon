#include<iostream>
using namespace std;

int a[2000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int m;

		cin >> m;

		a[m + 1000000]++;
	}

	for (int i = 0; i < 2000001; i++) {
		if (a[i] == 1) cout << i - 1000000 << "\n";
	}
}