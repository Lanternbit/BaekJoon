#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word;
	int number[15];
	int ans = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		int w = int(word[i]);
		
		switch (w) {
			case 65:
			case 66:
			case 67:
				number[i] = 2;
				break;
			case 68:
			case 69:
			case 70:
				number[i] = 3;
				break;
			case 71:
			case 72:
			case 73:
				number[i] = 4;
				break;
			case 74:
			case 75:
			case 76:
				number[i] = 5;
				break;
			case 77:
			case 78:
			case 79:
				number[i] = 6;
				break;
			case 80:
			case 81:
			case 82:
			case 83:
				number[i] = 7;
				break;
			case 84:
			case 85:
			case 86:
				number[i] = 8;
				break;
			case 87:
			case 88:
			case 89:
			case 90:
				number[i] = 9;
				break;
		}
	}

	for (int i = 0; i < word.length(); i++) {
		ans += number[i] + 1;
	}

	cout << ans << "\n";
}