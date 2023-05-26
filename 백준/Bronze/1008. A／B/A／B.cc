#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie();

	double A, B;

	cin >> A >> B;

	cout.setf(ios::fixed);
	cout.precision(9);
	cout << A / B << "\n";
}