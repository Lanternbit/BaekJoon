#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;

	cin >> n;

	v.push_back(0);

	while (n--) {
		int p;

		cin >> p;

		v.push_back(p);
	}

	for (int i = 1; i < v.size(); i++) {
		int max = 0;

		for (int j = 0; j <= i/2; j++) {
			int t = v[i - j] + v[j];

			if (max < t) max = t;
		}

		v[i] = max;
	}
	
	cout << v[v.size() - 1] << "\n";
}