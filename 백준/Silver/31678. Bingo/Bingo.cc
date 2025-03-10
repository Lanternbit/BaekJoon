#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> names;
vector<string> bingo;
vector<vector<int>> board;
vector<int> line;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int ans = 0;

    cin >> n;

    while(n--) {
        string name;
        int now = board.size();

        cin >> name;

        names.push_back(name);

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int t;
                cin >> t;

                line.push_back(t);
            }
            board.push_back(line);
            line.clear();
        }

        for (int i = 0; i< 5; i++) {
            for (int j = 0; j < 5; j++) {
                line.push_back(board[now + j][i]);
            }
            board.push_back(line);
            line.clear();
        }

        for (int i = 0; i < 5; i++) {
            line.push_back(board[now + i][i]);
        }
        board.push_back(line);
        line.clear();

        for (int i = 0; i < 5; i++) {
            line.push_back(board[now + i][4-i]);
        }
        board.push_back(line);
        line.clear();
    }

    int num;

    cin >> num;
    
    while(num--) {
        int ball;
        
        cin >> ball;

        for (int i = 0; i < names.size()*12; i++) {
            for (int j = 0; j < 5; j++) {
                if (board[i][j] == ball) board[i][j] = 0;
            }

            if (board[i][0] == 0 && board[i][1] == 0 && board[i][2] == 0 && board[i][3] == 0 && board[i][4] == 0) {
                ans++;
                bingo.push_back(names[i/12]);
                i += 11 - i%12;
            }
        }

        if (ans != 0) {
            cout << ans << "\n";

            for (int i = 0; i < bingo.size(); i++) cout << bingo[i] << "\n";
            return 0;
        }
    }

    if (ans == 0) cout << ans << "\n";
}