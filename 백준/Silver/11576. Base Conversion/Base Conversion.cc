#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, m;
	stack<int> s;

	cin >> a >> b >> m;

	while (m--) {
		int t;

		cin >> t;

		s.push(t);
	}

	long long r = 1;
	long long e = 0;

	while (!s.empty()) {
		e += s.top() * r;
		r *= a;
		s.pop();
	}

	r = b;

	while (e != 0) {
		s.push(e % r);
		e -= e % r;
		r *= b;
	}

	r /= b * b;

	while (!s.empty()) {
		cout << s.top() / r << " ";
		s.pop();
		r /= b;
	}
}