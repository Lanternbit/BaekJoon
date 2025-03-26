#include<iostream>
#include<deque>
using namespace std;

deque<int> d;

void left() {
    d.push_back(d.front());
    d.pop_front();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int ans = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) d.push_back(i);
    
    while (m--) {
        int num;
        cin >> num;

        int lr = 0;
        while (d.front() != num) {
            left();
            lr++;
        }

        if (lr > d.size() / 2) ans += d.size() - lr;
        else ans += lr;

        d.pop_front();
    }

    cout << ans;
}