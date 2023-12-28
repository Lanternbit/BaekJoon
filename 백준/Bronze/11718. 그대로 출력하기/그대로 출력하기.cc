#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word[100];
	int length = 0;

	for (int i = 0; i < 100; i++) {
		getline(cin, word[i]);

		int w = int(word[i][0]);
		if (w > 0) w = 0;
		else break;

		length++;
	}

	for (int i = 0; i < length; i++) {
		cout << word[i] << "\n";
	}
}