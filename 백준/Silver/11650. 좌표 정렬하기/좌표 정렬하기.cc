#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<pair<int, int>> v;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		v.push_back(pair<int, int>(a, b));
	}

	sort(v.begin(), v.end());

	vector<pair<int, int>>::iterator iter;

	for (iter = v.begin(); iter < v.end(); iter++) {
		cout << iter->first << " " << iter->second << "\n";
	}
}