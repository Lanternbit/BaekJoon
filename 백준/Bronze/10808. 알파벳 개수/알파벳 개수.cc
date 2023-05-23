#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[26] = { 0 };

	for (int i = 0; i < 100; i++) {
		char s = '0';

		cin >> s;

		if (s == 'a') arr[0]++;
		else if (s == 'b') arr[1]++;
		else if (s == 'c') arr[2]++;
		else if (s == 'd') arr[3]++;
		else if (s == 'e') arr[4]++;
		else if (s == 'f') arr[5]++;
		else if (s == 'g') arr[6]++;
		else if (s == 'h') arr[7]++;
		else if (s == 'i') arr[8]++;
		else if (s == 'j') arr[9]++;
		else if (s == 'k') arr[10]++;
		else if (s == 'l') arr[11]++;
		else if (s == 'm') arr[12]++;
		else if (s == 'n') arr[13]++;
		else if (s == 'o') arr[14]++;
		else if (s == 'p') arr[15]++;
		else if (s == 'q') arr[16]++;
		else if (s == 'r') arr[17]++;
		else if (s == 's') arr[18]++;
		else if (s == 't') arr[19]++;
		else if (s == 'u') arr[20]++;
		else if (s == 'v') arr[21]++;
		else if (s == 'w') arr[22]++; 
		else if (s == 'x') arr[23]++;
		else if (s == 'y') arr[24]++;
		else if (s == 'z') arr[25]++;
		else break;
	}

	for (int i = 0; i < 26; i++) {
	    cout << arr[i] << " ";
	}
}

/*
#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[26] = { 0 };
	string s;

	cin >> s;

	for (auto c : s) {
		arr[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}
*/
