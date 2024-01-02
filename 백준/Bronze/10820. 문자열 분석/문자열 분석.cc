#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string c;

	while (getline(cin, c)) {
		int arr[4] = { 0 };		

		for (int i = 0; i < c.size(); i++) {
			if (c[i] >= 'a' && c[i] <= 'z') arr[0]++;
			else if (c[i] >= 'A' && c[i] <= 'Z') arr[1]++;
			else if (c[i] >= '0' && c[i] <= '9') arr[2]++;
			else arr[3]++;
		}

		for (int i = 0; i < 4; i++) {
			cout << arr[i] << " ";
		}

		cout << "\n";
	}
}