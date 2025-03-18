#include<iostream>
using namespace std;

bool deck[20000001] = {0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int card;

        cin >> card;

        deck[card + 10000000] = true;
    }

    int m;

    cin >> m;

    for (int i = 0; i < m; i++) {
        int num;

        cin >> num;

        if (deck[num + 10000000] == true) cout << 1 << " ";
        else cout << 0 << " ";
    }
}