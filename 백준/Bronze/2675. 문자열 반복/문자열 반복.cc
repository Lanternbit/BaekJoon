#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int R;
		string S;

		cin >> R >> S;

		for (int j = 0; j < S.size(); j++) {
			for (int k = 0; k < R; k++) cout << S[j];
		}

		cout << "\n";
	}
}