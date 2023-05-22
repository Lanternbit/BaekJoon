#include<iostream>
using namespace std;

int main() {
	int call;
	int time;
	int sumY = 0;
	int sumM = 0;

	cin >> call;

	for (int i = 0; i < call; i++) {
	    int y, m;

		cin >> time;

		y = 10 * ((time / 30) + 1);
		m = 15 * ((time / 60) + 1);

		if (time == 0) {
			cout << "Y M 0\n";
			break;
		}

		sumY += y;
		sumM += m;
	}

	if (sumY == sumM) cout << "Y M " << sumY << "\n";
	else if (sumY > sumM) cout << "M " << sumM << "\n";
	else cout << "Y " << sumY << "\n";

	return 0;
}