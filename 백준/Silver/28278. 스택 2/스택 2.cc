// 1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
// 2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
// 3: 스택에 들어있는 정수의 개수를 출력한다.
// 4: 스택이 비어있으면 1, 아니면 0을 출력한다.
// 5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
#include<iostream>
#include<stack>
using namespace std;

stack<int> myStack;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    while(n--) {
        int input;

        cin >> input;

        switch(input) {
            case 1:
                int num;
                cin >> num;

                myStack.push(num);
                break;
            case 2:
                if (myStack.size() != 0) {
                    cout << myStack.top() << "\n";
                    myStack.pop();
                }
                else cout << "-1\n";
                break;
            case 3:
                cout << myStack.size() << "\n";
                break;
            case 4:
                if (myStack.size() == 0) cout << 1 << "\n";
                else cout << 0 << "\n";
                break;
            case 5:
                if (myStack.size() != 0) cout << myStack.top() << "\n";
                else cout << "-1\n";
                break;
        }
    }
}