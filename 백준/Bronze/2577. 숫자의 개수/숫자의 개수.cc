#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[10] = { 0 };
	int A, B, C;

	cin >> A >> B >> C;

	int num = A * B * C;

	for (int i = 0; i < 9; i++) {
		if (num == 0) break;
		else {
			arr[num % 10]++;
			num /= 10;
		}
	}

	for (int i = 0; i < 10; i++) cout << arr[i] << "\n";
}
