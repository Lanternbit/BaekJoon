#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<long long> v;
	long long a[2] = { 0, 1 };

	cin >> n;

	v.push_back(0);
	v.push_back(1);

	for (int i = 2; i <= n; i++) {
		v.push_back(2 * a[0] + a[1]);

		long long zero = a[0] + a[1];
		long long one = a[0];
		a[0] = zero;
		a[1] = one;
	}

	cout << v[n] << "\n";
}