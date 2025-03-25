#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a;

    while (n--) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());

    cout << a.front() * a.back();
}