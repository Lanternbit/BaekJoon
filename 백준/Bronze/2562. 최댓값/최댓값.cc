#include<iostream>
using namespace std;

int main() {
	int maxval = 0;
	int maxpos = 0;

	for (int i = 1; i <= 9; i++) {
		int val;
		cin >> val;

		if (maxval < val) {
			maxval = val;
			maxpos = i;
		}
	}

	cout << maxval << '\n';
	cout << maxpos << '\n';
}