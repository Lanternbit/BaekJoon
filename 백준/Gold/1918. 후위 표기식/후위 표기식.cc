#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string c;
	stack<char> s;

	cin >> c;

	for (int i = 0; i < c.size(); i++) {
		if (c[i] >= 'A' && c[i] <= 'Z') {
			cout << c[i];
		}
		else {
			if (c[i] == '(') s.push(c[i]);
			else if(c[i] == ')') {
				while (true) {
					if (s.top() == '(') {
						s.pop();
						break;
					}
					else {
						cout << s.top();
						s.pop();
					}
				}
			}
			else if (c[i] == '+' || c[i] == '-') {
				while (!s.empty()) {
					if (s.top() != '(') {
						cout << s.top();
						s.pop();
					}
					else break;
				}

				s.push(c[i]);
			}
			else if (c[i] == '*' || c[i] == '/') {
				while (!s.empty()) {
					if (s.top() == '*' || s.top() == '/') {
						cout << s.top();
						s.pop();
					}
					else break;
				}

				s.push(c[i]);
			}
		}
	}

	while (!s.empty()) {			
		cout << s.top();
		s.pop();
	}
}