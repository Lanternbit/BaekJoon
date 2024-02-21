#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    char a;
    
    cin >> a;
    
    if (a == 'N' || a == 'n') cout << "Naver D2" << "\n";
    else cout << "Naver Whale" << "\n";
}