#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> v;
int check = 0;

void make_v() {
	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		v.push_back(a);
	}
}

void re_sort() {
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] - v[i - 1] < 0) {
			if (i == n - 1) {
				swap(v[n - 1], v[n - 2]);
				break;
			}
			else {
				for (int j = n - 1; j >= i; j--) {
					if (v[i - 1] > v[j]) {
						swap(v[i - 1], v[j]);
						break;
					}
				}

				sort(v.begin() + i, v.end(), greater<int>());
				break;
			}
		}
		else if (i == 1) {
			check++;
			break;
		}
	}
}

void printing() {
	if (check == 1) cout << -1;
	else {
		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
	}

	cout << "\n";
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	if (n == 1) cout << -1 << "\n";
	else {
		make_v();

		re_sort();

		printing();
	}

	return 0;
}