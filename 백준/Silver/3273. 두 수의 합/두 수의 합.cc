#include<iostream>
using namespace std;

	int arr[100000]; // 전역으로 선언하지 않으면 스택오버플로우가 난다.
	int check[1000001]; // 1000000도 포함되게 1000001의 크기로 선언

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
		if (x - arr[i] <= 1000000 && x - arr[i] >= 0) { // (x - arr[i])가 check[]의 배열 길이에 따라 범위 설정을 해줘야 한다.
		    if (check[x - arr[i]] == 1) cnt++;
		}
		check[arr[i]]++;
	}

	cout << cnt << "\n";
}
