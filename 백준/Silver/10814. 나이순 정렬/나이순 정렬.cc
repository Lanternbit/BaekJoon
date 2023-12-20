#include<iostream>
#include<string>
using namespace std;

string member[2][100000];
int w[100000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int t;
	int x = 0;
	int k = 0;
	int age[200] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> member[0][i] >> member[1][i];

		t = stoi(member[0][i]) - 1;
		age[t]++;
	}

	for (int i = 0; i < 200; i++) {
		if (age[i] != 0) {
			for (int j = 0; j < n; j++) {
				if (i == stoi(member[0][j]) - 1) {
					w[x] = j;
					x++;
				}
			}

			while (k != x) {
				cout << member[0][w[k]] << " " << member[1][w[k]] << "\n";
				k++;
			}
		}
	}
}