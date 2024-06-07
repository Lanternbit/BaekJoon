#include<iostream>
#include<vector>
using namespace std;

vector<int> t;
vector<int> p;
int n;
int best = 0;


// 최대 수익 구하는 함수, 백트래킹
void calc(int day, int earn) {
	for (int i = day; i < n; i++) {
		if (i + t[i] < n) {
			calc(i + t[i], earn + p[i]);
		}
		else if (i + t[i] == n) {
			earn += p[i];
			if (best < earn) best = earn;
			earn -= p[i];
		}
		else if (i + t[i] > n) {
			if (best < earn) best = earn;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	// 값 들 삽입
	for (int i = 0; i < n; i++) {
		int time, pay;

		cin >> time >> pay;

		t.push_back(time);
		p.push_back(pay);
	}

	// 모든 경우의 수 확인 후, 가장 수익이 큰 것 채택
	calc(0, 0);
	
	// 출력
	cout << best << "\n";
}