#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    while(n--) {
        string input;
        list<char> myList;
        auto cursor = myList.begin();

        cin >> input;

        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '<') {
                if (cursor != myList.begin()) --cursor;
            }
            else if (input[i] == '>') {
                if (cursor != myList.end()) ++cursor;
            }
            else if (input[i] == '-') {
                if (cursor != myList.begin()) {
                    --cursor;
                    cursor = myList.erase(cursor);
                }
            }
            else {
                cursor = myList.insert(cursor, input[i]);
                if (myList.empty() == 0) ++cursor;
            }

        }

        for (char c : myList) cout << c;
        cout << "\n";
    }
}