#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	cin.ignore();

	while (t--) {
		stack<char> s;
		string sen;
		int n = 0;

		getline(cin, sen);

		sen += ' ';

		for (int i = 0; i < sen.length(); i++) {
			if (sen[i] == ' ') {
				while (s.size()) {
					cout << s.top();
					s.pop();
				}

				cout << " ";
			}
			else {
				s.push(sen[i]);
			}
		}

		cout << "\n";
	}
}
