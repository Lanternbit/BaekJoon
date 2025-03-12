#include<iostream>
#include<vector>
using namespace std;

vector<int> standard;
vector<int> trust;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;

    cin >> k;

    for (int i = 1; i <= k; i++) {
        cout << "Data Set " << i << ":\n";

        int n, m;
        cin >> n >> m;

        for (int j = 0; j < m; j++) {
            int s;
            cin >> s;

            standard.push_back(s);
        }

        int ans = -4000;

        for (int j = 1; j <= n; j++) {
            int score = 0;

            for (int t = 0; t < m; t++) {
                int feature;
                cin >> feature;

                score += standard[t] * feature;
            }

            if (score > ans) {
                ans = score;
                trust.clear();
                trust.push_back(j);
            }
            else if (score == ans) trust.push_back(j);
        }

        for (int j = 0; j < trust.size(); j++) {
            cout << trust[j] << "\n";
        }
        
        standard.clear();
        trust.clear();
        cout << "\n";
    }
}