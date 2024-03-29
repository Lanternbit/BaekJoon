#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	double arr[1000];
	double max = 0;
	double sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (max < arr[i]) max = arr[i];
	}

	for (int i = 0; i < n; i++) {
		sum += (arr[i] / max) * 100;
	}

	cout << fixed;
	cout.precision(6);
	cout << sum / n << "\n";
}