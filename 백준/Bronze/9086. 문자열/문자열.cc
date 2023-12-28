#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		string word;

		cin >> word;

		cout << word[0] << word[word.length() - 1] << "\n";
	}
}