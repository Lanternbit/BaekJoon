#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int k;
	vector<int> v;

	v.push_back(0);

	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1) v.push_back(1);
			else if (j == 1) v[1] = i % 1000000000;
			else {
				v[j] = (v[j]+ v[j - 1]) % 1000000000;
			}
		}
	}

	cout << v[n] << "\n";
}