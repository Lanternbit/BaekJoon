#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int point(vector<int> &order, int begin, int end, int p) {
	int size = end - begin;

	if (size == 0) {
		return end;
	}

	if (order[begin + (size / 2)] == p) return (begin + (size / 2));
	else if (order[begin + (size / 2)] > p) {
		return point(order, begin, begin + (size / 2) - 1, p);
	}
	else {
		return point(order, begin + (size / 2) + 1, end, p);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> v;
	vector<int> c;
	vector<int> order;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;

		cin >> x;

		v.push_back(x);
	}

	c = v;

	sort(c.begin(), c.end());

	for (int i = 0; i < n; i++) {
		if (i == 0) order.push_back(c[i]);
		else if (c[i] != c[i - 1]) order.push_back(c[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << point(order, 0, order.size() - 1, v[i]) << " ";
	}

	cout << "\n";
}