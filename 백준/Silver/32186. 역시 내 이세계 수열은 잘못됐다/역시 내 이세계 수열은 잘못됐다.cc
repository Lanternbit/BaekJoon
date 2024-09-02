#include<iostream>
#include<vector>
using namespace std;

vector<int> chain;

int diff(int a, int b) {
	int d;

	if (a >= b) d = a - b;
	else d = b - a;

	return d;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;

	cin >> n >> k;
	
	chain.push_back(0);

	for (int i = 1; i <= n; i++) {
		int num;

		cin >> num;

		chain.push_back(num);
	}

	long long ans = 0;

	for (int i = 1; i <= n / 2; i++) {
		int d = diff(chain[i], chain[n - i + 1]);
		int t = 0;

		ans += d / k;
		d %= k;
		
		if (k - d < d) ans += k - d + 1;
		else ans += d;
	}

	cout << ans << "\n";
}