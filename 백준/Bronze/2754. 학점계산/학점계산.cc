#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string ip;
	double ans = 0;

	cin >> ip;
	cout << fixed;
	cout.precision(1);

	if (ip[0] == 'A') ans += 4;
	else if (ip[0] == 'B') ans += 3;
	else if (ip[0] == 'C') ans += 2;
	else if (ip[0] == 'D') ans += 1;

	if (ip[1] == '+') ans += 0.3;
	else if (ip[1] == '-') ans -= 0.3;

	cout << ans << "\n";
}