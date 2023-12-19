#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int info[2][50];
	int ans[50] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> info[0][i] >> info[1][i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (info[0][i] < info[0][j] && info[1][i] < info[1][j]) {
				ans[i]++;
			}
		}

		cout << ans[i] + 1 << " ";
	}
}