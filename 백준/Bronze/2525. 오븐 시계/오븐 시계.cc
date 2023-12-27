#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;

	cin >> a >> b >> c;

	int end = (a * 60) + b + c;

	if (end >= 1440) end -= 1440;

	cout << end / 60 << " " << end % 60 << "\n";
}