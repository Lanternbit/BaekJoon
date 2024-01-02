#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		int n;
		long long ans = 0;
		vector<int> v;

		cin >> n;

		for (int i = 0; i < n; i++) {
			int a;

			cin >> a;

			v.push_back(a);
		}

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				ans += gcd(v[i], v[j]);
			}
		}
		
		cout << ans << "\n";
	}
}