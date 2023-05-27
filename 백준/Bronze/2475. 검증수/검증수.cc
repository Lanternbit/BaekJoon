#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie();

	int a[5];
	int ans = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		ans += a[i] * a[i];
	}

	cout << ans % 10;
}