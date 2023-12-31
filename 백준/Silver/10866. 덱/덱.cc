#include<iostream>
#include<string>
using namespace std;

int deque[20001];
int head = 10000;
int tail = 10000;

void front() {
	if (tail == head) cout << -1 << "\n";
	else cout << deque[head] << "\n";
}

void back() {
	if (tail == head) cout << -1 << "\n";
	else cout << deque[tail - 1] << "\n";
}

void push_front(int x) {
	deque[--head] = x;
}

void push_back(int x) {
	deque[tail++] = x;
}

void pop_front() {
	front();
	if (tail != head) head++;
}

void pop_back() {
	back();
	if (tail != head) tail--;
}

void size() {
	cout << tail - head << "\n";
}

void empty() {
	if (tail == head) cout << 1 << "\n";
	else cout << 0 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		string s;

		cin >> s;

		if (s == "push_front") {
			int x;

			cin >> x;

			push_front(x);
		}
		else if (s == "push_back") {
			int x;

			cin >> x;

			push_back(x);
		}
		else if (s == "pop_front") {
			pop_front();
		}
		else if (s == "pop_back") {
			pop_back();
		}
		else if (s == "size") {
			size();
		}
		else if (s == "empty") {
			empty();
		}
		else if (s == "front") {
			front();
		}
		else if (s == "back") {
			back();
		}
	}
}