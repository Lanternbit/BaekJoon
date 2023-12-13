#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;

	cin >> N >> M;

	int a[100];
	int ans = 300000;
	int d = 0;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int diff = M - (a[i] + a[j] + a[k]);

				if (diff < ans && diff >= 0) {
					ans = diff;
					d = a[i] + a[j] + a[k];
				}
			}
		}
	}

	cout << d << "\n";
}