#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int arr[10000] = { 0 };
	int t = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[t] = i;
			t++;
		}
	}

	cout << arr[k - 1] << "\n";
}