#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	stack<int> s;

	cin >> n;

	for (int t = 0; t < n; t++) {
		string c;

		cin >> c;

		if (c == "push") {
			int number;

			cin >> number;

			s.push(number);
		}
		else if (c == "pop") {
			if (s.empty()) cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (c == "size") cout << s.size() << "\n";
		else if (c == "empty") {
			if (s.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else {
			if (s.empty()) cout << -1 << "\n";
			else cout << s.top() << "\n";
		}
	}
}