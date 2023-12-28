#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int standard[6] = {1, 1, 2, 2, 2, 8};
	int piece[6];

	for (int i = 0; i < 6; i++) {
		cin >> piece[i];

		cout << standard[i] - piece[i] << " ";
	}
}