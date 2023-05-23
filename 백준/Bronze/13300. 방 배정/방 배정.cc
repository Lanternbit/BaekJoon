#include<iostream>
using namespace std;

	int male[7];
	int female[7];

int main(void) {
	int N;
	int K;
	int room = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int sex;
		int grade;
		
		cin >> sex >> grade;

		if (sex == 0) female[grade]++;
		else male[grade]++;
	}

	for (int i = 1; i < 7; i++) {
		if (male[i] % K == 0) room += male[i] / K;
		else room += male[i] / K + 1;

		if (female[i] % K == 0) room += female[i] / K;
		else room += female[i] / K + 1;
	}

	cout << room << "\n";
}