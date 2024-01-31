#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int ans = 0;
	int b = 1;

	cin >> n;

	for (int i = 1; i <= to_string(n).length(); i++) {
		if (to_string(n).length() > i) {
			ans += 9 * b * i;
			b *= 10;
		}
		else ans += to_string(n).length() * (n - b + 1);
	}

	cout << ans << "\n";
}