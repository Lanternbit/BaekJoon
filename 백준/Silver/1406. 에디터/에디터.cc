#include<iostream>
#include<stack>
#include<string>
using namespace std;

void left(stack<char>& c1, stack<char>& c2) {
	if (!c1.empty()) {
		c2.push(c1.top());
		c1.pop();
	}
}

void right(stack<char>& c1, stack<char>& c2) {
	if (!c2.empty()) {
		c1.push(c2.top());
		c2.pop();
	}
}

void del(stack<char>& c1, stack<char>& c2) {
	if (!c1.empty()) c1.pop();
}

void add(stack<char>& c1, stack<char>& c2, char ch) {
	c1.push(ch);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<char> c1;
	stack<char> c2;
	string s;
	int m;

	cin >> s >> m;

	for (int i = 0; i < s.length(); i++) {
		c1.push(s[i]);
	}
	while (m--) {
		char c;

		cin >> c;

		if (c == 'L') {
			left(c1, c2);
		}
		else if (c == 'D') {
			right(c1, c2);
		}
		else if (c == 'B') {
			del(c1, c2);
		}
		else {
			char ch;

			cin >> ch;

			add(c1, c2, ch);
		}
	}

	while (!c1.empty()) {
		c2.push(c1.top());
		c1.pop();
	}

	while (!c2.empty()) {
		cout << c2.top();
		c2.pop();
	}
}