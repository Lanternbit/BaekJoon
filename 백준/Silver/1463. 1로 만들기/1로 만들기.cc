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
	v.push_back(0);

	for (int i = 2; i <= n; i++) {
		if (i % 3 == 0 && i % 2 == 0) {
			if (v[i / 3] <= v[i / 2] && v[i / 3] <= v[i - 1]) v.push_back(v[i / 3] + 1);
			else if (v[i / 2] <= v[i / 3] && v[i / 2] <= v[i - 1]) v.push_back(v[i / 2] + 1);
			else v.push_back(v[i - 1] + 1);
		}
		else if (i % 3 == 0) {
			if (v[i / 3] <= v[i - 1]) v.push_back(v[i / 3] + 1);
			else v.push_back(v[i - 1] + 1);
		}
		else if (i % 2 == 0) {
			if (v[i / 2] <= v[i - 1]) v.push_back(v[i / 2] + 1);
			else v.push_back(v[i - 1] + 1);
		}
		else v.push_back(v[i - 1] + 1);
	}

	cout << v.back() << "\n";
}