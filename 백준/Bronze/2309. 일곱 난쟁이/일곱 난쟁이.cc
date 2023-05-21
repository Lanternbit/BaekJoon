#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int height[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> height[i];

		sum += height[i];
	}

	int endflag = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - (height[i] + height[j]) == 100 && i != j) {
				height[i] = 0;
				height[j] = 0;
				endflag = 1;
				break;
			}
		}

		if (endflag == 1) break;
	}

	sort(height, height+9);

	for (int i = 2; i < 9; i++) {
	    cout << height[i] << "\n";
	}

	return 0;
}