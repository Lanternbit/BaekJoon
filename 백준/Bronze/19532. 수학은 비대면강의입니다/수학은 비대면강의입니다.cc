#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	cout << (c * e - b * f) / (a * e - b * d) << " " << (c * d - a * f) / (b * d - a * e) << "\n";
}