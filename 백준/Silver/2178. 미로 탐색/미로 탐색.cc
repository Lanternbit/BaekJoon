#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;
#define MAX 101

int n, m;
queue<pair<int, int>> q;
int map[MAX][MAX] = { 0 };
bool visited[MAX][MAX];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void reset() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			visited[i][j] = 0;
		}
	}
}

void bfs(int a, int b) {
	q.push({ a, b });

	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = dx[dir] + cur.first;
			int ny = dy[dir] + cur.second;

			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
			if (visited[nx][ny] != 0 || map[nx][ny] != 1) continue;

			visited[nx][ny] = 1;
			map[nx][ny] += map[cur.first][cur.second];

			q.push({ nx, ny });
		}

		if (q.empty()) cout << map[n][m] << "\n";
	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string s;

		cin >> s;

		for (int j = 0; j < m; j++) {
			if (s[j] == '1') {
				map[i + 1][j + 1] = 1;
			}
		}
	}

	reset();
	visited[1][1] = 1;
	bfs(1, 1);

	return 0;
}