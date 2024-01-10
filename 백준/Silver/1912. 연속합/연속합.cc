#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;
	vector<int> m;
	int max[2] = { 0 };
	int b = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		max[0] = v[i];
		max[1] = b + v[i];

		if (max[0] >= max[1]) b = max[0];
		else b = max[1];

		m.push_back(b);
	}

	cout <<  *max_element(m.begin(), m.end()) << "\n";
}