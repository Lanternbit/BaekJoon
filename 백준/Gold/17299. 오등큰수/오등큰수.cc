#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<pair<int, int>> s;
stack<int> ans;
vector<pair<int, int>> v;
int f[1000001] = { 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(make_pair(a, 0));
		f[a]++;
	}

	for (int i = 0; i < n; i++) {
		v[i].second = f[v[i].first];
	}

	for (int i = 0; i < n; i++) {
		while (!s.empty() && v.back().second >= s.top().second) {
			s.pop();
		}

		if (s.empty()) ans.push(-1);
		else ans.push(s.top().first);

		s.push(v.back());
		v.pop_back();
	}

	while (!ans.empty()) {
		cout << ans.top() << " ";
		ans.pop();
	}
}