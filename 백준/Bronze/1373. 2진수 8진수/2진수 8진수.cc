#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n;
	
	cin >> n;

	int k = n.length() % 3;
	int ans = 0;

	for (int i = 0; i < k; i++) {
		if (k == 2) {
			ans = (n[0] - '0') * 2 + (n[1] - '0');
		}
		else ans = n[0] - '0';
	}

	if (ans != 0) cout << ans;
	if (n == "0") cout << 0;

	for (int i = 0; i < n.length() / 3; i++) {
		int ans = 0;
		int m = 4;

		for (int j = 0; j < 3; j++) {
			ans += (n[k + 3 * i + j] - '0') * m;
			m /= 2;
		}

		cout << ans;
	}
}