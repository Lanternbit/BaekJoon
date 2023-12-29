#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[3];

	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	if (a[0] == 60 && a[1] == 60 && a[2] == 60) cout << "Equilateral" << "\n";
	else if (a[0] + a[1] + a[2] == 180) {
		if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) cout << "Isosceles" << "\n";
		else cout << "Scalene" << "\n";
	}
	else cout << "Error" << "\n";
}