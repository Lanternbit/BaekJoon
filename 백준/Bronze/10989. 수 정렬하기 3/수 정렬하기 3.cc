#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int arr[10000] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;

		cin >> t;

		arr[t - 1]++;
	}

	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << (i + 1) << "\n";
		}
	}
}