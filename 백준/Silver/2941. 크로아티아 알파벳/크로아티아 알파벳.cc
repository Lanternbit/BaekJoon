#include<iostream>
#include<string>
using namespace std;

// - -> 45
// = -> 61
// j -> 106

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word;
	int ans = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		int c = int(word[word.length() - i - 1]);

		if (c == 45) {
			ans++;
			i++;
		}
		else if (c == 61) {
			switch (int(word[word.length() - i - 2])) {
				case 99:
				case 115:
					ans++;
					i++;
					break;
				case 122:
					if (int(word[word.length() - i - 3]) == 100) {
						ans++;
						i++;
						i++;
					}
					else {
						ans++;
						i++;
					}
					break;
			}
		}
		else if (c == 106) {
			if (int(word[word.length() - i - 2]) == 108 || int(word[word.length() - i - 2]) == 110) {
				ans++;
				i++;
			}
			else ans++;
		}
		else ans++;
	}

	cout << ans << "\n";
}