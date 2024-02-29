#include<iostream>
#include<string>
using namespace std;

int n, m;
string s;
string p;
int ans = 0;
int len = 0;
int check = 0;

void matching() {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'I') {
			check = 1;

			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				len++;
				i += 2;
			}

			if (len >= n) ans += len - n + 1;

			len = 0;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> s;

	matching();

	cout << ans << "\n";

	return 0;
}
