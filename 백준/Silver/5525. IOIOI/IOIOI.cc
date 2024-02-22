#include<iostream>
#include<string>
#include<deque>
using namespace std;

int n;
int m;
int ans = 0;
string s;
deque<char> d;

void check(int len) {
	ans++;

	for (int j = 0; j < len; j++) {

		if (j % 2 == 0) {
			if (d[j] != 'I') {
				ans--;
				break;
			}
		}
		else {
			if (d[j] != 'O') {
				ans--;
				break;
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> s;

	int len = 2 * n + 1;

	for (int i = 0; i < m; i++) {
		if (i < len) d.push_back(s[i]);
		else {
			check(len);
			
			d.pop_front();
			d.push_back(s[i]);
		}

		if (i == m - 1) check(len);
	}

	cout << ans << "\n";
}