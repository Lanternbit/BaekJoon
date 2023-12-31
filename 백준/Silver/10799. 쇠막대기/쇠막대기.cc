#include<iostream>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string c;
	int t = 0;
	int ans = 0;

	cin >> c;

	for (int i = 0; i < c.length(); i++) {
		if (c[i] == '(') {
			ans++;
			t++;
		}
		else {
			ans--;
			t--;

			if (c[i - 1] == '(') {
				ans += t;
			}
			else ans++;
		}
	}

	cout << ans << "\n";
}