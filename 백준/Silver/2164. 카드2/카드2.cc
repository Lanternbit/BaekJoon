#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<int> deck;

    for (int i = 1; i <= n; i++) {
        deck.push(i);
    }

    while (deck.size() > 1) {
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }

    cout << deck.front();
}