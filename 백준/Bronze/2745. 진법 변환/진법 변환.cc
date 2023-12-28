#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n;
	int	b;
	int m = 1;
	int t = 0;

	cin >> n >> b;

	for (int i = 0; i < n.length(); i++) {
		int c = int(n[n.length() - i - 1]);
		
		if (c > 60) t += (c - 55) * m;
		else t += (c - 48) * m;

		m *= b;
	}

	cout << t << "\n";
}