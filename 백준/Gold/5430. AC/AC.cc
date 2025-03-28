#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string p;
        cin >> p;

        int n;
        cin >> n;

        string x_origin;
        cin >> x_origin;

        deque<int> x;

        for (int i = 1; i < x_origin.length(); i++) {
            int t = 0;

            while (x_origin[i] != ',' && x_origin[i] != ']') {
                t = t * 10 + (x_origin[i] - 48);
                i++;
            }

            if (t != 0) x.push_back(t);
        }

        int order = 1;

        for (int i = 0; i < p.size(); i++) {
            if (p[i] == 'R') {
                if (order == 1) order = 0;
                else order = 1;
            }
            else {
                if (x.size() == 0) {
                    cout << "error\n";
                    order = 2;
                    break;
                }
                else if (order == 1) x.pop_front();
                else x.pop_back();
            }
        }

        if (order != 2) {
            cout << "[";

            if (order == 1) {
                for (int i = 0; i < x.size(); i++) {
                    cout << x[i];

                    if (i != x.size() - 1) cout << ',';
                }
            }
            else if (order == 0) {
                for (int i = x.size() - 1; i >= 0; i--) {
                    cout << x[i];

                    if (i != 0) cout << ',';
                }
            }

            cout << "]\n";
        }
    }
}