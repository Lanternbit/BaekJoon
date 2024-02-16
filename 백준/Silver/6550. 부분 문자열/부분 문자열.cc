#include<iostream>
#include<string>
using namespace std;

string a, b;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> a >> b) {
		int k = 0;

		for (int i = 0; i < b.length(); i++) {
			if (a[k] == b[i]) {
				k++;

				if (k == a.length()) break;
			}
		}

		if (k == a.length()) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}

	return 0;
}