#include<iostream>
#include<string>
using namespace std;

string ch[50][20000];

void swap(string *a, string *b) {
	string temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(string A[], int low, int high) {
	if (low >= high) return;

	int i = low, j = low;
	string&pivot = A[high];

	for (; j < high; ++j) {
		if (A[j] < pivot)
			swap(A[i++], A[j]);
	}
	swap(A[i], pivot);

	quickSort(A, low, i - 1);
	quickSort(A, i + 1, high);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word[20000];
	int m[50] = { 0 };

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}

	for (int i = 0; i < n; i++) {
		int t = word[i].length();
	
		ch[t - 1][m[t - 1]] = word[i];
		m[t - 1]++;
	}

	for (int i = 0; i < 50; i++) {
		quickSort(ch[i], 0, m[i] - 1);
	}

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < m[i]; j++) {
			if (j == 0) cout << ch[i][j] << "\n";
			else if (j > 0 && ch[i][j] != ch[i][j - 1]) cout << ch[i][j] << "\n";
		}
	}
}