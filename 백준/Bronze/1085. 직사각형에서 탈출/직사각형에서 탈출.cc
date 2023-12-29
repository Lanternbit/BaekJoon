#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y, w, h;

	cin >> x >> y >> w >> h;

	if (x > (w / 2)) x = w - x;
	if (y > (h / 2)) y = h - y;

	if (x <= y) cout << x << "\n";
	else cout << y << "\n";
}