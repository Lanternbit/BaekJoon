#include<iostream>
#include<algorithm>
using namespace std;

struct Data {
	int x;
	int y;
};

bool cmp(Data a, Data b) {
	if (a.y == b.y) return a.x < b.x;
	else return a.y < b.y;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	Data data[100000];
	
	for (int i = 0; i < n; i++) {
		cin >> data[i].x >> data[i].y;
	}

	sort(data, data + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << data[i].x << " " << data[i].y << "\n";
	}
}
