#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string s;
vector<string> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		string z;
		z += s[i];

		for (int j = i + 1; j < s.length(); j++) {
			z += s[j];
		}

		v.push_back(z);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}