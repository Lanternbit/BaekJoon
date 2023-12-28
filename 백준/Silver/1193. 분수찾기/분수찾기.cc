#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	int s = 1;
	int t = 0;

	cin >> x;

	while (t < x) {
		t += s;
		s++;
	}

	if (s % 2 == 1) {
		cout << s - t + x - 1 << "/" << t - x + 1 << "\n";
	}
	else {
		cout << t - x + 1 << "/" << s - t + x - 1 << "\n";
	}
}