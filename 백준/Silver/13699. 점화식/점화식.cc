#include<iostream>
#include<vector>
using namespace std;

vector<long long int> result;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    result.push_back(1);

    for(int i = 1; i <= n; i++) {
        long long int num = 0;
        int t = i - 1;

        for (int j = 0; j < i; j++) {
            num += result[j] * result[t];
            t--;
        }

        result.push_back(num);
    }

    cout << result[n];
}