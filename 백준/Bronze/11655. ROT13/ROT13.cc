#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string c;

	getline(cin, c);

	for (int i = 0; i < c.size(); i++) {
		if (c[i] >= 97 && c[i] < 110) {
			char ans = c[i] + 13;
			cout << ans;
		}
		else if (c[i] >= 110 && c[i] <= 122) {
			char ans = c[i] - 13;
			cout << ans;
		}
		else if (c[i] >= 65 && c[i] < 78) {
			char ans = c[i] + 13;
			cout << ans;
		}
		else if (c[i] >= 78 && c[i] <= 90) {
			char ans = c[i] - 13;
			cout << ans;
		}
		else cout << c[i];
	}
}