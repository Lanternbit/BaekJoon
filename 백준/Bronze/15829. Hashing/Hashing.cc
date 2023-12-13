#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int R = 31;
	const int M = 1234567891;

	int L;
	char a[50];
	long long H = 0;

	cin >> L;
	
	for (int i = 0; i < L; i++) {
		cin >> a[i];

		int alphabet = a[i] - 96;
		long long p = 1;

		for (int j = 0; j < i; j++) {
			p = (p * R) % M;
		}

		p = p * alphabet;
		H += p % M;
	}

	cout << H % M << "\n";
}