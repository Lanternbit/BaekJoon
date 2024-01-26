#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, m;

	cin >> n >> m;

	if (n >= m) cout << n - m << "\n";
	else cout << m - n << "\n";
}