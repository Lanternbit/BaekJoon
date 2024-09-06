#include<iostream>
#include<vector>
using namespace std;

vector<int> zero;
vector<int> one;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;

	zero.push_back(1);
	zero.push_back(0);
	one.push_back(0);
	one.push_back(1);

	cin >> n;

	while (n--) {
		int fibonacci;

		cin >> fibonacci;
		
		if (zero.size() <= fibonacci) {
			for (int i = zero.size(); i <= fibonacci; i++) {
				zero.push_back(zero[i - 1] + zero[i - 2]);
				one.push_back(one[i - 1] + one[i - 2]);
			}
			cout << zero[fibonacci] << " " << one[fibonacci] << "\n";
		}
		else {
			cout << zero[fibonacci] << " " << one[fibonacci] << "\n";
		}
	}
}