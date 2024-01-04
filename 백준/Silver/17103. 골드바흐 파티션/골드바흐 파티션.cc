#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	vector<int> v;
	int max = 0;

	cin >> t;

	while (t--) {
		int a;

		cin >> a;

		v.push_back(a);
	}

	for (int i = 0; i < v.size(); i++) {
		if (max < v[i]) max = v[i];
	}
	
	vector<bool> e(max + 1);
	
	for (int i = 2; i <= max / 2; i++) {
		for (int j = i * 2; j <= max; j += i) {
			e[j] = true;
		}
	}
	
	for (int i = 0; i < v.size(); i++) {
		int cnt = 0;

		for (int j = 2; j <= v[i] / 2; j++) {
			if (e[j] == false && e[v[i] - j] == false) {
				cnt++;
			}
		}

		cout << cnt << "\n";
	}
}