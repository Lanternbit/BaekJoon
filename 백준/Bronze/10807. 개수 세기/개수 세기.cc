#include<iostream>
using namespace std;

	int p[101];
	int m[101];

int main(void) {
	int N;
	int v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		
		cin >> a;

		if (a >= 0) p[a]++;
		else m[-a]++;
	}

	cin >> v;

	if (v >= 0) cout << p[v] << "\n";
	else cout << m[-v] << "\n";
}