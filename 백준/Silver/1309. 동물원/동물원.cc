#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;

	cin >> n;

	v.push_back(1);
	v.push_back(3);

	for (int i = 2; i <= n; i++) {
		int k = v[i - 1] * 2 + v[i - 2];

		if (k > 9901) k %= 9901;
		
		v.push_back(k);
	}

	cout << v[n] << "\n";
}