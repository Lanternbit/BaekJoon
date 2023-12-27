#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[30] = { 0 };

	for (int i = 0; i < 28; i++) {
		int number;

		cin >> number;

		a[number - 1]++;
	}

	for (int i = 0; i < 30; i++) {
		if (a[i] == 0) cout << i + 1 << "\n";
	}
}