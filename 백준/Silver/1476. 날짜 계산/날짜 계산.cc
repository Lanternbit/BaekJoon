#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans;
	int e, s, m;

	cin >> e >> s >> m;

	for (int i = 1; i < 7981; i++) {
		ans = i;

		if (i % 15 == e % 15 && i % 28 == s % 28 && i % 19 == m % 19) break;
	}

	cout << ans << "\n";
}