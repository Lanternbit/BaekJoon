#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int sy = 2024;
    int sm = 8;

    if (n == 1) {
        cout << sy << " " << sm;
        return 0;
    }

    n *= 7;
    n -= 7;

    sm += n;
    
    int py = sm / 12;
    sm = sm % 12;

    if (sm == 0) {
        py -= 1;
        sm = 12;
    }
    cout << sy + py << " " << sm;
}