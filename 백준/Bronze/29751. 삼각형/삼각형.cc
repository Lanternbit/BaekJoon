#include<iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int w, h;
    
    cin >> w >> h;
    
    cout << fixed;
    cout.precision(1);
    
    cout << w * h * 0.5;
}