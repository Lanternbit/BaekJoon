#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> v;
vector<int> t;
int check = 0;

void make_v() {
	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(a);
	}
}

void find_next() {
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] - v[i - 1] < 0 && i == 1) {
			check++;
			break;
		}

		if (v[i] - v[i - 1] > 0) {
			if (i == n - 1) {
				int temp;
				temp = v[i];
				v[i] = v[i - 1];
				v[i - 1] = temp;
			}
			else {
				sort(v.begin() + i, v.end());

				for (int j = i; j < n; j++) {
					if (v[j] > v[i - 1]) {
						int temp = v[j];
						v[j] = v[i - 1];
						v[i - 1] = temp;
						break;
					}
				}

				sort(v.begin() + i, v.end());
			}

			break;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	if (n == 1) {
		cout << -1 << "\n";
		
		return 0;
	}

	make_v();

	find_next();

	if (check == 1) cout << -1;
	else {
		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
	}

	cout << "\n";

	return 0;
}