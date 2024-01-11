#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;
	int p = 1;

	v.push_back(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == p * p) {
			p++;
			v.push_back(1);
		}
		else {
			int min = 100000;

			for (int j = 2; j <= p; j++) {
				int k = (j - 1) * (j - 1);

				if (min > v[k] + v[i - k]) min = v[k] + v[i - k];
			}

			v.push_back(min);
		}
	}
	
	cout << v[n] << "\n";
}