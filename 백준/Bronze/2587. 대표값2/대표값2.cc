#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];

		sum += arr[i];
	}

	sort(arr, arr + 7);

	cout << sum / 5 << "\n";
	cout << arr[3];

	return 0;
}