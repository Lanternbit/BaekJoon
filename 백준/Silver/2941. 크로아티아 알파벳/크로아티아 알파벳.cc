#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word;

	cin >> word;

	string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int idx;

	for (int i = 0; i < 8; i++) {
		while (true) {
			idx = word.find(arr[i]);

			if (idx == string::npos) break;

			word.replace(idx, arr[i].length(), "a");
		}
	}

	cout << word.length() << "\n";
}
