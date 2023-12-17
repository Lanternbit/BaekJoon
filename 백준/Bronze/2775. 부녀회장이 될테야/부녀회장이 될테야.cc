#include<iostream>
using namespace std;

int population(int arr[][15], int k, int n) {
	int sum = 0;
	
	if (k != 0) {
		for (int i = 1; i <= n; i++) {
			sum += population(arr, k - 1, i);
		}
	}
	else {
		arr[0][n] = n;
		sum = arr[0][n];
	}

	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
	    int k, n;
		int a[15][15];

    	cin >> k >> n;

		cout << population(a, k, n) << "\n";
	}
}