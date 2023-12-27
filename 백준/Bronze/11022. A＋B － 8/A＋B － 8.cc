#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;

		cin >> a >> b;

		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}
}