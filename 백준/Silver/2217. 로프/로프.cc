#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> strong;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int max = 0;

    for (int i = 0; i < n; i++) {
        int w;

        cin >> w;

        strong.push_back(w);
    }
    
    sort(strong.begin(), strong.end());

    for (int i = 0; i < n; i++) {
        int t = strong[i] * (n - i);

        if (max < t) max = t;
    }

    cout << max << "\n";
}