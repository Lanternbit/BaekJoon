#include<iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int arr[], int low, int high) {
	if (low >= high) return;

	int i = low;
	int j = low;
	int &pivot = arr[high];

	for (; j < high; ++j) {
		if (arr[j] < pivot) {
			swap(arr[i++], arr[j]);
		}
	}

	swap(arr[i], pivot);

	quickSort(arr, low, i - 1);
	quickSort(arr, i + 1, high);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int b[7];
	int c[50000];
	int d[50000];
	int g = 0;
	int x = 0;

	cin >> n;

	for (int i = 0; i < 5; i++) {
		b[i] = 6;
		b[i + 1] = 6;
		b[i + 2] = 6;

		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					for (int m = 0; m < 10; m++) {
						b[(i + 3) % 7] = j;
						b[(i + 4) % 7] = k;
						b[(i + 5) % 7] = l;
						b[(i + 6) % 7] = m;

						c[g] = (b[6] * 1000000) + (b[5] * 100000) + (b[4] * 10000) + (b[3] * 1000) + (b[2] * 100) + (b[1] * 10) + b[0];
						g++;
					}
				}
			}
		}
	}

	quickSort(c, 0, g - 1);

	for (int i = 0; i < g; i++) {
		if (c[i] != c[i - 1] && i != 0) {
			d[x] = c[i];
			x++;
		}
		else if (i == 0) {
			d[x] = c[i];
			x++;
		}
	}

	cout << d[n - 1] << "\n";
}