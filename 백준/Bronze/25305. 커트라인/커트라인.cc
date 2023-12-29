#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int s[10001] = { 0 };
	int cl;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int x;

		cin >> x;

		s[x]++;
	}

	for (int i = 10000; i >= 0; i--) {
		if (s[i] != 0) {
			if (k > 0) {
				k -= s[i];

				if (k <= 0) {
					cl = i;
					break;
				}
			}
		}
	}

	cout << cl << "\n";
}