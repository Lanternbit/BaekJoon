#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> d;
	long long a[10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

	cin >> n;

	d.push_back(0);
	d.push_back(9);

	for (int i = 2; i <= n; i++) {
		long long zero = a[1];
		long long one = (a[0] + a[2]) % 1000000000;
		long long two = (a[1] + a[3]) % 1000000000;
		long long three = (a[2] + a[4]) % 1000000000;
		long long four = (a[3] + a[5]) % 1000000000;
		long long five = (a[4] + a[6]) % 1000000000;
		long long six = (a[5] + a[7]) % 1000000000;
		long long seven = (a[6] + a[8]) % 1000000000;
		long long eight = (a[7] + a[9]) % 1000000000;
		long long nine = a[8];

		long long ans = (a[0] + 2 * (a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8]) + a[9]) % 1000000000;

		d.push_back(ans);

		a[0] = zero;
		a[1] = one;
		a[2] = two;
		a[3] = three;
		a[4] = four;
		a[5] = five;
		a[6] = six;
		a[7] = seven;
		a[8] = eight;
		a[9] = nine;
	}

	cout << d[n] << "\n";
}