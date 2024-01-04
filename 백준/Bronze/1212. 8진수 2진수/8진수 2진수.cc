#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n;
	vector<int> v;
	
	cin >> n;

	for (int i = 0; i < n.length(); i++) {
		int m = 4;
		int t = n[i] - '0';

		if (n == "0") {
			cout << 0;
			break;
		}

		for (int j = 0; j < 3; j++) {
			if (t - m >= 0) {
				v.push_back(1);
				t -= m;
			}
			else v.push_back(0);

			m /= 2;
		}
	}

	int k = 0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 1) k = 1;

		if (k == 1) cout << v[i];
	}
}