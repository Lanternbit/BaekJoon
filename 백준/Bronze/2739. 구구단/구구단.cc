#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie();

	int num;

	cin >> num;

	for (int i = 1; i <= 9; i++) {
		cout << num << " * " << i << " = " << num * i << "\n";
	}
}