#include<iostream>
using namespace std;

int factorial(int num) {
	if (num <= 1) return 1;

	int result = num * factorial(num - 1);

	return result;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;

	cin >> n >> k;

	int result = factorial(n) / (factorial(n - k) * factorial(k));

	cout << result << "\n";
}