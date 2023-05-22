#include<iostream>
using namespace std;

int reverse(int a, int b, int (&card)[]) {
	int d = b - a;
	
	if (d != 0) {
		for (int i = 0; i < d; i++) {
			int t;

			t = card[a + i];
			card[a + i] = card[b - i];
			card[b - i] = t;
		}
	}

	return card[20];
}

int main() {
	int card[20];
	int a;
	int b;

	for (int i = 0; i < 20; i++) {
		card[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cin >> a >> b;

		int d = b - a;

		if (d != 0) {
			for (int j = 0; j < d; j++) {
				int t;

				t = card[a + j - 1];
				card[a + j - 1] = card[b - j - 1];
				card[b - j - 1] = t;

				if ((d - 2 * j) / 2 == 0) break;
			}
		}
	}
	for (int i = 0; i < 20; i++) cout << card[i] + 1 << " ";
	

	return 0;
}