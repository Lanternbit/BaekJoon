#include<iostream>
using namespace std;

int main() {
	int arr[3] = { 0 };
	int b = 0;
	int m = 0;
	int s = 0;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];


		if (arr[i] > b) {
			s = m;
			m = b;
			b = arr[i];
		}
		else if (arr[i] > m) {
			s = m;
			m = arr[i];
		}
		else s = arr[i];
	}
	cout << s << " " << m << " " << b << "\n";

	return 0;
}