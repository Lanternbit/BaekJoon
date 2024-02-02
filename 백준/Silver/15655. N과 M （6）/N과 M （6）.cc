#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
vector<int> v;
int arr[9];
bool isused[9] = { 0 };

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!isused[i]) {
			if (k == 0) arr[k] = v[i];
			else {
				if (arr[k - 1] < v[i]) arr[k] = v[i];
				else continue;
			}
			isused[i] = 1;

			func(k + 1);

			isused[i] = 0;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	v.push_back(0);

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(a);
	}

	sort(v.begin(), v.end());
	func(0);

	return 0;
}