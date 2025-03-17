#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w, n, m;
    int col = 0;
    int row = 0;

    cin >> h >> w >> n >> m;

    while(h > 0) {
        col++;
        h -= n + 1;
    }

    while(w > 0) {
        row++;
        w -= m + 1;
    }

    cout << col * row << "\n";
}