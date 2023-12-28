#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word;
	int t = 0;

	cin >> word;

	for (int i = 0; i < word.length() / 2; i++) {
		if (word[i] != word[word.length() - i - 1]) t = 1;
	}

	if (t == 1) cout << 0 << "\n";
	else cout << 1 << "\n";
}