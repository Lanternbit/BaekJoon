#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string t1;
	string t2;
	int txt[26] = { 0 };
	int cnt = 0;
	
	cin >> t1 >> t2;

	int size = t1.size() + t2.size();

	for (int i = 0; i < size; i++) {
		if (i < t1.size()) txt[t1[i] - 97]++;
		if (i < t2.size()) txt[t2[i] - 97]--;
	}

	for (int i = 0; i < 26; i++) {
		if (txt[i] < 0) txt[i] *= -1;
		if (txt[i] != 0) cnt += txt[i];
	}

	cout << cnt << "\n";
}