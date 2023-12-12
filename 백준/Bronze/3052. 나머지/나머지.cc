#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[10];
	int b[42] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];

		b[a[i] % 42] = 1;
	}

	for (int i = 0; i < 42; i++) {
		sum += b[i];
	}

	cout << sum << "\n";
}