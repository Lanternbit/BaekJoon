#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9][9];
	int max = 0;
	int max_i = 1;
	int	max_j = 1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];

			if (max < arr[i][j]) {
				max = arr[i][j];
				max_i = i + 1;
				max_j = j + 1;
			}
		}
	}

	cout << max << "\n";
	cout << max_i << " " << max_j << "\n";
}