#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int ans = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		int check[26] = { 0 };
		int t = 0;

		cin >> word;

		for (int j = 0; j < word.length(); j++) {
			int c = int(word[j]) - 97;
			if (j == 0) check[c]++;
			else {
				if (word[j - 1] != word[j]) check[c]++;
			}
		}

		for (int j = 0; j < 26; j++) {
			if (check[j] > 1) t = 1;
		}

		if (t == 0) ans++;
	}

	cout << ans << "\n";
}