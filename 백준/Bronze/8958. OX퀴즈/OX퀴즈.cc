#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		string result;
		int score = 0;
		int sum = 0;

		cin >> result;

		for (int j = 0; j < result.length(); j++) {
			int n = (int)result[j];
			if (n == 79) {
				score++;
				sum += score;
			}
			else score = 0;
		}

		cout << sum << "\n";
	}
}