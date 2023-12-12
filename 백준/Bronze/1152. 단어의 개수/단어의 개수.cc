#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int ans = 0;

	while (cin >> s) {
		ans++;
	}

	cout << ans << "\n";
}