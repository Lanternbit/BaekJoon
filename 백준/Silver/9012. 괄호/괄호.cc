#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		string g;
		stack<char> c;
		int vps = 0;

		cin >> g;

		for (int i = 0; i < g.length(); i++) {
			c.push(g[i]);
		}
		
		while (c.size()) {
			if (c.top() == ')') {
				vps += 1;
				c.pop();
			}
			else {
				vps -= 1;
				c.pop();
				if (vps < 0) break;
			}
		}

		if (vps == 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}