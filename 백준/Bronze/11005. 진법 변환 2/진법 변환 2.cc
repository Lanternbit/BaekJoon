#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, b;
	long long m = 1;
	int count = 0;
	int a[30];

	cin >> n >> b;

	while (n / m > 0) {
		m *= b;
		count++;
	}

	for (int i = 0; i < count; i++) {
		m /= b;
		a[i] = n / m;
		n -= a[i] * m;
	}

	for (int i = 0; i < count; i++) {
		if (a[i] > 9) cout << (char)(a[i] + 55);
		else cout << a[i];
	}
}