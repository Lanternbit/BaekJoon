#include<iostream>
#include<vector>
#include<string>
#include<limits>
using namespace std;

vector<string> split(string& s, string& sep) {
	vector<string> ret;
	int pos = 0;

	while (pos < s.size()) {
		int nxt_pos = s.find(sep, pos);

		if (nxt_pos == -1) nxt_pos = s.size();
		if (nxt_pos - pos > 0) {
			ret.push_back(s.substr(pos, nxt_pos - pos));
		}

		pos = nxt_pos + sep.size();
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while (t--) {
		string s;
		vector<string> v;
		string space = " ";

		getline(cin, s);
		
		v = split(s, space);

		for (int i = 0; i < v.size(); i++) {
			for (int j = v[i].size() - 1; j >= 0; j--) {
				cout << v[i][j];
			}

			cout << " ";
		}

		cout << "\n";
	}
}