#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;

	cin >> n;

	cout << (n - 1) * 3 + (n + 3);
}