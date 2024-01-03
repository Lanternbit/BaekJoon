#include<iostream>
#include<vector>
#include<algorithm>
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

	int n, s;
	vector<int> v;

	cin >> n >> s;

	v.push_back(s);

	while (n--) {
		int a;

		cin >> a;

		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++) {
		v[i] = v[i + 1] - v[i];
	}

	v.pop_back();
	int t = v[0];

	for (int i = 0; i < v.size() - 1; i++) {
		t = gcd(t, v[i + 1]);
	}

	cout << t << "\n";
}