#include<iostream>
#include<algorithm>
using namespace std;

int blank[503][503] = { 0 };

int find_max(int blank[][503], int n, int m) {
	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int first_1 = blank[i][j] + blank[i][j + 1] + blank[i][j + 2] + blank[i][j + 3];
			int first_2 = blank[i][j] + blank[i + 1][j] + blank[i + 2][j] + blank[i + 3][j];

			int second = blank[i][j] + blank[i + 1][j] + blank[i][j + 1] + blank[i + 1][j + 1];

			int third_1 = blank[i][j] + blank[i + 1][j] + blank[i + 2][j] + blank[i + 2][j + 1];
			int third_2 = blank[i + 1][j] + blank[i + 1][j + 1] + blank[i + 1][j + 2] + blank[i][j + 2];
			int third_3 = blank[i][j] + blank[i][j + 1] + blank[i + 1][j + 1] + blank[i + 2][j + 1];
			int third_4 = blank[i][j] + blank[i + 1][j] + blank[i][j + 1] + blank[i][j + 2];
			int third_5 = blank[i + 2][j] + blank[i + 2][j + 1] + blank[i + 1][j + 1] + blank[i][j + 1];
			int third_6 = blank[i][j] + blank[i][j + 1] + blank[i][j + 2] + blank[i + 1][j + 2];
			int third_7 = blank[i][j] + blank[i + 1][j] + blank[i + 2][j] + blank[i][j + 1];
			int third_8 = blank[i][j] + blank[i + 1][j] + blank[i + 1][j + 1] + blank[i + 1][j + 2];

			int fourth_1 = blank[i][j] + blank[i + 1][j] + blank[i + 1][j + 1] + blank[i + 2][j + 1];
			int fourth_2 = blank[i + 1][j] + blank[i + 1][j + 1] + blank[i][j + 1] + blank[i][j + 2];
			int fourth_3 = blank[i + 2][j] + blank[i +1][j] + blank[i + 1][j + 1] + blank[i][j + 1];
			int fourth_4 = blank[i][j] + blank[i][j + 1] + blank[i + 1][j + 1] + blank[i + 1][j + 2];

			int fifth_1 = blank[i][j] + blank[i][j + 1] + blank[i][j + 2] + blank[i + 1][j + 1];
			int fifth_2 = blank[i][j] + blank[i + 1][j] + blank[i + 2][j] + blank[i + 1][j + 1];
			int fifth_3 = blank[i + 1][j] + blank[i + 1][j + 1] + blank[i + 1][j + 2] + blank[i][j + 1];
			int fifth_4 = blank[i + 1][j] + blank[i][j + 1] + blank[i + 1][j + 1] + blank[i + 2][j + 1];

			ans = max({ans, first_1, first_2, second, third_1, third_2, third_3, third_4, third_5, third_6, third_7, third_8, fourth_1, fourth_2, fourth_3, fourth_4, fifth_1, fifth_2, fifth_3, fifth_4 });
		}
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	 
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> blank[i][j];
		}
	}

	int max = find_max(blank, n, m);

	cout << max << "\n";
}