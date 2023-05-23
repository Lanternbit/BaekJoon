#include<iostream>
using namespace std;

	int arr[100000];
	int check[1000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;

	cin >> x;

	for (int i = 0; i < n; i++) {
		if (x - arr[i] <= 1000000 && x - arr[i] >= 0) {
		    if (check[x - arr[i]] == 1) cnt++;
		}
		check[arr[i]]++;
	}

	cout << cnt << "\n";
}