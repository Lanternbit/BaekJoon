#include<iostream>
using namespace std;

int main() {
	long long int a, b;
	int diff;

	cin >> a >> b;

	if (a >= b) diff = a - b;
	else diff = b - a;


	if (a != b) {
	    cout << diff - 1 << "\n";
		
		for (int i = 1; i < diff; i++) {
			if (a >= b) cout << b + i << " ";
			else cout << a + i << " ";
		}
	}
	else cout << "0\n";

	return 0;
}