#include<iostream>
using namespace std;

int main() {
	int N;
	int num[10] = { 0 };
	int max = 0;

	cin >> N;

	for (int i = 0; i < 6; i++) {
		num[N % 10] += 1;
		
		if (N / 10 > 0) N /= 10;
		else break;
	}

	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			num[i] = num[i] + num[6];
			num[i] = (num[i] + 1) / 2;
			num[6] = 0;
		}

		if (num[i] > max && i != 6) {
			max = num[i];
		}
	}
	cout << max << "\n";

	return 0;
}