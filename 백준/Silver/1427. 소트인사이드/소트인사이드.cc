#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n.length(); i++) {
		v.push_back(int(n[i]) - 48);
	}

	sort(v.begin(), v.end());

	for (int i = n.length() - 1; i >= 0; i--) {
		cout << v[i];
	}
}