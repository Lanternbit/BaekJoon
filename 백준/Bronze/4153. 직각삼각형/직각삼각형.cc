#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;

	while (cin >> a >> b >> c) {
		if (a == 0) break;

		if (a > b && a > c) {
			if (a * a == b * b + c * c) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else if (b > a && b > c) {
			if (b * b == a * a + c * c) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else if (c > a && c > b) {
			if (c * c == a * a + b * b) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
	}
}