#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int> s;
stack<int> ans;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		while (!s.empty() && v.back() >= s.top()) {
			s.pop();
		}

		if (s.empty()) ans.push(-1);
		else ans.push(s.top());

		s.push(v.back());
		v.pop_back();
	}

	while (!ans.empty()) {
		cout << ans.top() << " ";
		ans.pop();
	}
}