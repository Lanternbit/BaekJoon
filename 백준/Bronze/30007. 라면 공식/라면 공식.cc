#include<iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a, b, x;
    
    cin >> n;
    
    while(n--) {
        cin >> a >> b >> x;
        
        cout << a * (x - 1) + b << "\n";
    }
    
    return 0;
}