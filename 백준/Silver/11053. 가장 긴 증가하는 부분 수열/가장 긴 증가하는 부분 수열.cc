#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;

	cin >> n;

	v.push_back(v1);
	v.push_back(v2);
	v[0].push_back(0);
	v[1].push_back(0);

	for (int i = 1; i <= n; i++) {
		int a;

		cin >> a;

		v[0].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		int max = 0;

		for (int j = i - 1; j >= 0; j--) {
			if (v[0][i] > v[0][j]) {
				if (max < v[1][j]) max = v[1][j];
			}
		}

		v[1].push_back(max + 1);
	}

	int max = 0;

	for (int i = 0; i < v[1].size(); i++) {
		if (max < v[1][i]) max = v[1][i];
	}

	cout << max << "\n";
}