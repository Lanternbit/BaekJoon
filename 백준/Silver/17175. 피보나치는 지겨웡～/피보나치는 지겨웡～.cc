#include<iostream>
#include<vector>
using namespace std;

vector<int> call;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    call.push_back(1);
    call.push_back(1);

    for (int i = 2; i <= n; i++) {
        int number = call[i - 1] + call[i - 2] + 1;

        if (number > 500000000) number %= 1000000007;

        call.push_back(number);
    }

    cout << call[n];
}