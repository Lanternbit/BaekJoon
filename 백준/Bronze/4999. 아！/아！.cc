#include<iostream>
#include<string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string jae;
    string doctor;
    
    cin >> jae >> doctor;
    
    if (jae.length() >= doctor.length()) cout << "go" << "\n";
    else cout << "no" << "\n";
}