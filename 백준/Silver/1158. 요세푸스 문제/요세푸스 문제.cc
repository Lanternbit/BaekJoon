#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	queue<int> q1;
	queue<int> q2;
	int count = 1;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		q1.push(i + 1);
	}

	cout << "<";

	while (true) {
		if (q1.empty() && q2.empty()) break;

		while (!q1.empty()) {
			if (count != k) {
				q2.push(q1.front());
				q1.pop();
				count++;
			}
			else {
				if (q1.front() == k) {
					cout << k;
				}
				else cout << ", " << q1.front();

				count = 1;
				q1.pop();
			}
		}

		while (!q2.empty()) {
			if (count != k) {
				q1.push(q2.front());
				q2.pop();
				count++;
			}
			else {
				if (q2.front() == k) {
					cout << k;
				}
				else cout << ", " << q2.front();

				count = 1;
				q2.pop();
			}
		}
	}

	cout << ">";
}