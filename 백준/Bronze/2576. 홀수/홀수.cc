#include<iostream>
using namespace std;

int main() {
	int arr[7];
	int sum = 0;
	int min = 100;

	for (int i = 0; i < 7; i++) {
		
		cin >> arr[i];

		if (arr[i] % 2 == 1) {
			sum += arr[i];
			
			if (min > arr[i]) {
				min = arr[i];
			}
		}
	}

	if (sum != 0) cout << sum << "\n" << min << "\n";
	else cout << "-1";

	return 0;
}