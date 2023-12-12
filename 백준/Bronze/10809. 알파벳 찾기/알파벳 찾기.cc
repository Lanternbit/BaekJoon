#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int diff[26];

	cin >> s;

	for (int i = 0; i < 26; i++) {
		diff[i] = -1;
	}

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (diff[j] == -1 && alphabet[j] == s[i]) {
				diff[j] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << diff[i] << " ";
	}

	cout << "\n";
}