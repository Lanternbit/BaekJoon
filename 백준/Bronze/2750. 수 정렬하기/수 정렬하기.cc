#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	int count[2001] = { 0 };

	for (int i = 0; i < t; i++) {
		int n;

		cin >> n;

		count[n + 1000]++;
	}

	for (int i = 0; i < 2001; i++) {
		if (count[i] != 0) cout << i - 1000 << "\n";
	}
}