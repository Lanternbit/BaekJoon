#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int min_f = 0;
	int min_t = 0;
	
	cin >> n;

	for (int i = 0; i <= n / 5; i++) {
		for (int j = 0; j <= n / 3; j++) {
			if ((i * 5) + (j * 3) == n) {
				min_f = i;
				min_t = j;
			}
		}
	}

	if (min_f + min_t == 0) cout << -1 << "\n";
	else cout << min_f + min_t << "\n";
}