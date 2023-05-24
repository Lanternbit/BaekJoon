#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string t1;
		string t2;
		int txt[53] = { 0 };
		int ans = 0;
		
		cin >> t1 >> t2;

		int size1 = t1.size();
		int size2 = t2.size();

		for (int j = 0; j < size1; j++) {
			if (t1[j] >= 97 && t1[j] < 123) {
			    txt[t1[j] - 97]++;
			}
		}

		for (int j = 0; j < size2; j++) {
			if (t2[j] >= 97 && t2[j] < 123) {
				txt[t2[j] - 71]++;
			}
		}

		if (size1 == size2) {
		    for (int j = 0; j < 26; j++) {
			    if (txt[j] == txt[j + 26] && txt[j] != 0) ans += txt[j];
		    }

    		if (size1 == ans) cout << "Possible" << "\n";
	    	else cout << "Impossible" << "\n";
        }
		else cout << "Impossible" << "\n";
	}
}