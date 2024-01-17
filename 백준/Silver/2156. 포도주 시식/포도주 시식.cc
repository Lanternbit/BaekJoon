#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[10000] = { 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;

	cin >> n;

	v.push_back(0);
	v.push_back(0);
	v.push_back(0);

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		v.push_back(max({ a[i] + a[i - 1] + v[i] , a[i] + v[i + 1], v[i + 2] }));
	}

	cout << v.back() << "\n";
}