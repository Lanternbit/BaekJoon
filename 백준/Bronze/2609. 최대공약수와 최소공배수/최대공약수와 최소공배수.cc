#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;

	cin >> m >> n;

	int max = 0;
	int min = 0;

	for (int i = 0; i <= 10000; i++) {
		if (m % (i + 1) == 0 && n % (i + 1) == 0) max = (i + 1);
	}

	min = (m / max) * n;

	cout << max << "\n" << min << "\n";
}