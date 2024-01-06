#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	vector<int> d;
	int k = 4;
	int arr[9] = { 1, 0, 0, 0, 1, 0, 1, 1, 1 };

	cin >> t;

	d.push_back(0);
	d.push_back(1);
	d.push_back(1);
	d.push_back(3);

	while (t--) {
		int n;

		cin >> n;
		
		for (int i = k; i <= n; i++) {
			long long a = (arr[7] + arr[8]) % 1000000009;
			long long b = (arr[3] + arr[5]) % 1000000009;
			long long c = (arr[0] + arr[1]) % 1000000009;

			d.push_back((a + b + c) % 1000000009);
			for (int j = 3; j < 9; j++) {
				arr[j - 3] = arr[j];
			}
			
			arr[6] = a;
			arr[7] = b;
			arr[8] = c;
		}

		cout << d[n] << "\n";
		k = d.size();
	}
}