#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	vector<int> v;
	vector<int> v2;
	vector<char> ans;
	stack<int> s;
	int count = 0;

	cin >> t;

	while (t--) {
		v.push_back(t + 1);

		int n;

		cin >> n;

		v2.push_back(n);
	}

	s.push(0);

	while (true) {

		ans.push_back('+');

		if (v.size() > 0) {
			s.push(v[v.size() - 1]);
			v.pop_back();
		}

		while (true) {
			if (count >= v2.size()) break;

			if (s.top() == v2[count]) {
				ans.push_back('-');
				s.pop();
				count++;
			}
			else if (v.size() == 0) {
				count = -1;
				break;
			}
			else break;
		}

		if (count >= v2.size()) break;
	}

	if (count == -1) cout << "NO" << "\n";
	else {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << "\n";
		}
	}
}