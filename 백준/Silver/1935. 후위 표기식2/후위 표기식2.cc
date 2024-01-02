#include<iostream>
#include<stack>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string c;
	stack<double> s;
	double p[26];
	int n;

	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < c.size(); i++) {
		if (c[i] >= 65 && c[i] <= 90) {
			int k = c[i] - 65;
			s.push(p[k]);
		}
		else {
			double t = s.top();
			s.pop();
			if (c[i] == 43) t = s.top() + t;
			else if (c[i] == 45) t = s.top() - t;
			else if (c[i] == 42) t = s.top() * t;
			else if (c[i] == 47) t = s.top() / t;
			s.pop();
			s.push(t);
		}
	}

	cout << fixed;
	cout.precision(2);

	cout << s.top() << "\n";
}