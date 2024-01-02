#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int ans = 1;

	cin >> n;

	while (n) {
		ans *= n;
		n--;
	}

	cout << ans << "\n";
}