#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string key;
string password;
vector<int> key_number;
vector<char> row;
vector<vector<char>> processed_password;
vector<vector<char>> plain_text;

void key_processing(string key) {
	int m_num;

	for (int k = 0; k < key.length(); k++) {
		char min_key = 'a';
		
		for (int i = 0; i < key.length(); i++) {
			int m = min_key;

			min_key = min(min_key, key[i]);

			if (m != min_key) m_num = i;
		}

		key_number.push_back(m_num);
		key[m_num] = 'a';
	}
}

void slice_password(string password) {
	int len = password.length() / key.length();

	for (int i = 0; i < password.length(); i++) {
		row.push_back(password[i]);

		if (i / len != (i + 1) / len) {
			processed_password.push_back(row);
			
			for (int j = 0; j < len; j++) {
				row.pop_back();
			}
		}
	}
}

void rearrangement() {
	int len = password.length() / key.length();

	for (int i = 0; i < key.length(); i++) {
		row.push_back('a');
	}

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < key.length(); j++) {
			row[key_number[j]] = processed_password[j][i];
		}

		plain_text.push_back(row);
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> key;

	key_processing(key);

	cin >> password;

	slice_password(password);

	rearrangement();

	for (int i = 0; i < password.length() / key.length(); i++) {
		for (int j = 0; j < key.length(); j++) {
			cout << plain_text[i][j];
		}
	}
}