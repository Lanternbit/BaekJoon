#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;

	while(true) {
		cin >> a >> b;

		if (a + b == 0) break;
		else cout << a + b << "\n";
	}
}