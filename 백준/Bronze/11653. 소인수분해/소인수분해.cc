#include<iostream>
#include<vector>
using namespace std;

void divisor(int a, vector<int> &v) {
	int t = 1;

	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			t = i;
			break;
		}
	}

	if (t != 1) {
		v.push_back(t);
		
		divisor(a / t, v);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;

	cin >> n;

	divisor(n, v);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}