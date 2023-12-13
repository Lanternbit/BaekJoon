#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	int t = n;
	int a = 0;
	int b = 0;

	while (t > 0) {
		t = t / 10;
		a++;
	}

	for (int i = 0; i < a * 9; i++) {
		int k = n - (a * 9) + i;
		int sum = 0;
		int p = 10;
		
		int h = k;
		
		for (int j = 0; j < a; j++) {
			sum += h % 10;
			h /= 10;
		}

		int ans = k + sum;

		if (ans == n) {
			cout << k << "\n";
			b = 1;
			break;
		}

	}
	
	if (b != 1) cout << "0" << "\n";
}