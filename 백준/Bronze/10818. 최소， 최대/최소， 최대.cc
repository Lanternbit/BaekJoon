#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int m;
	int b = -1000000;
	int s = 1000000;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> m;
		
		if (m > b) b = m;
		if (m < s) s = m;
	}

	cout << s << " " << b << "\n";
}