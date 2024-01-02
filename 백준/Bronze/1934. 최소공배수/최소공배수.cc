#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		int a, b;
		int ans = 1;

		cin >> a >> b;
		
		int a1 = a;
		int b1 = b;
		vector<int> v1(a + 1);
		vector<int> v2(b + 1);
		
		for (int i = 0; i <= a1; i++) {
			if (i == 0 || i == 1) continue;
			if (a == 1) break;

			while (a != 1) {
				if (a % i == 0) {
					a /= i;
					v1[i]++;
				}
				else break;
			}
		}
		
		for (int i = 0; i <= b1; i++) {
			if (i == 0 || i == 1) continue;
			if (b == 1) break;

			while (b != 1) {
				if (b % i == 0) {
					b /= i;
					v2[i]++;
				}
				else break;
			}
		}

		if (a1 >= b1) {
			for (int i = 2; i <= a1; i++) {
				if (i > b1) {
					if (v1[i] != 0) {
						while (v1[i]--) {
							ans *= i;
						}
					}
				}
				else {
					if (v1[i] != 0 || v2[i] != 0) {
						if (v1[i] >= v2[i]) {
							while (v1[i]--) {
								ans *= i;
							}
						}
						else {
							while (v2[i]--) {
								ans *= i;
							}
						}
					}
				}
			}
		}

		if (a1 < b1) {
			for (int i = 2; i <= b1; i++) {
				if (i > a1) {
					if (v2[i] != 0) {
						while (v2[i]--) {
							ans *= i;
						}
					}
				}
				else {
					if (v1[i] != 0 || v2[i] != 0) {
						if (v1[i] <= v2[i]) {
							while (v2[i]--) {
								ans *= i;
							}
						}
						else {
							while (v1[i]--) {
								ans *= i;
							}
						}
					}
				}
			}
		}

		cout << ans << "\n";
	}
}