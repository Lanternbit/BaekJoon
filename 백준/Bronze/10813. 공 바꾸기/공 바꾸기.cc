#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int a[100];

	cin >> n >> m;

	for (int t = 0; t < n; t++) {
		a[t] = t + 1;
	}

	for(int t = 0; t < m; t++) {
		int i, j;
		
		cin >> i >> j;

		int temp;

		temp = a[i - 1];
		a[i - 1] = a[j - 1];
		a[j - 1] = temp;
	}

	for (int t = 0; t < n; t++) {
		cout << a[t] << " ";
	}
}