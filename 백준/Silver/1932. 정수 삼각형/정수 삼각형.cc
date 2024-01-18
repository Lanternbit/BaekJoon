#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;
	int k = 1;
	int f = 1;

	cin >> n;

	while (true) {
		int a;

		cin >> a;

		if (k == f) {
			if (f == 1) v.push_back(a);
			else v.push_back(a + v[v.size() - f + 1]);
		}
		else if (k == 1) v.push_back(a + v[v.size() - f]);
		else v.push_back(max(a + v[v.size() - f + 1], a + v[v.size() - f]));
		
		k--;
		
		if (k == 0) {
			f++;
			k = f;
		}

		if (f == n + 1) break;
	}

	int m = 0;

	for (int i = 0; i < f - 1; i++) {
		if (m < v[v.size() - 1 - i]) m = v[v.size() - 1 - i];
	}

	cout << m << "\n";
}