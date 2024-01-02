#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int ac = 0;
	int bc = 0;

	cin >> n;

	while (n) {
		int t = n;

		while (t % 5 == 0) {
			ac++;
			t /= 5;
		}

		while (t % 2 == 0) {
			bc++;
			t /= 2;
		}

		n--;
	}

	if (ac >= bc) cout << bc << "\n";
	else cout << ac << "\n";
}