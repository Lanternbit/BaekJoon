#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> n;
	int t = 1;
	int max = 1000001;
	vector<int> v(max);

	v[1] = true;

	for (int i = 2; i < max; i++) {
		if (!v[i]) {
			for (int j = i * 2; j < max; j += i) {
				v[j] = true;
			}
		}
	}

	while (true) {
		cin >> t;

		if (t == 0) break;

		for (int i = 3; i <= (t / 2 + 1); i++) {
			if (!v[i] && !v[t - i]) {
				cout << t << " = " << i << " + " << (t - i) << "\n";
				break;
			}

			if (i == (t / 2 + 1)) cout << "Goldbach's conjecture is wrong." << "\n";
		}
	}
}