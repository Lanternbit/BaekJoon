#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	vector<int> v;

	cin >> t;

	while (t--) {
		int n;

		cin >> n;

		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		v.push_back(4);

		for (int i = 4; i <= n; i++) {
			v.push_back(v[i - 1] + v[i - 2] + v[i - 3]);
		}

		cout << v[n] << "\n";

		v.clear();
	}
}