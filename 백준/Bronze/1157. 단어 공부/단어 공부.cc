#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int max = 0;
	int ans = 0;

	cin >> s;

	int a[26] = { 0 };

	for (int i = 0; i < s.length(); i++) {
		int n = (int)s[i];

		if (n > 90) {
			a[n - 97]++;
		}
		else a[n - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < a[i]) {
			max = a[i];
			ans = i;
		}
		else if (max == a[i]) ans = 100;
	}

	if (ans == 100) cout << "?" << "\n";
	else cout << ALPHABET[ans] << "\n";
}