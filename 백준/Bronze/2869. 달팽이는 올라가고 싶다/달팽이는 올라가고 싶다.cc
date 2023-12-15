#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, v;

	cin >> a >> b >> v;

	int day = 0;
	int c = a - b;

	if ((v - a) % c == 0){
		day = (v - a) / c + 1;
	}
	else day = (v - a) / c + 2;

	cout << day << "\n";
}