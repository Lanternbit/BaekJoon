#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	stack<char> a;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '<') {
			while (!a.empty()) {
				cout << a.top();
				a.pop();
			}

			cout << s[i];

			while (s[i] != '>') {
				i++;
				cout << s[i];
			}
		}
		else if (s[i] == ' ') {
			while (!a.empty()) {
				cout << a.top();
				a.pop();
			}

			cout << ' ';
		}
		else {
			a.push(s[i]);

			if (i == s.length() - 1) {
				while (!a.empty()) {
					cout << a.top();
					a.pop();
				}
			}
		}
	}
}