#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int H, M;

	cin >> H >> M;

	if (M >= 45) {
		cout << H << " " << M - 45 << "\n";
	}
	else if (H > 0) {
		cout << H - 1 << " " << M + 15 << "\n";
	}
	else {
		cout << "23 " << M + 15 << "\n";
	}
}