#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	stack<bool> s;
	int cnt = 1;
	long long t = 2;

	cin >> n;

	while (n != 0) {
		if (n % t == 0) {
			s.push(0);
		}
		else {
			s.push(1);
			if (cnt == 1) n -= t / 2;
			else n += t / 2;
		}
		
		t *= 2;
		cnt *= -1;
	}

	if (s.empty()) cout << 0;
	else {
		while (!s.empty()) {
			cout << s.top();;
			s.pop();
		}
	}
}