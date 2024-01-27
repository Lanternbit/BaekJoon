#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int br[10] = { 0 };

bool btn_cnt(int n) {
	string sn = to_string(n);

	for (int i = 0; i < sn.length(); i++) {
		if (br[sn[i] - '0'] == 1) return 1;
	}

	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int bn;
	int ch = 100;

	cin >> n >> bn;

	for (int i = 0; i < bn; i++) {
		int a;

		cin >> a;

		br[a]++;
	}

	int cnt = abs(ch - n);

	for (int i = 0; i < 1000000; i++) {
		if (btn_cnt(i) == 0) {
			int second_cnt = abs(n - i) + to_string(i).length();
			cnt = min(cnt, second_cnt);
		}
	}

	cout << cnt << "\n";
}