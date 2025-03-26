#include <iostream>
#include <string>
using namespace std;

const int S = 2000000;
int queue[S + 1];
int head = 0;
int tail = 0;

// push X: 정수 X를 큐에 넣는 연산이다.
void push(int x) {
    queue[tail] = x;
    tail++;
}

// pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void pop() {
    if (head == tail) cout << -1;
    else {
        cout << queue[head];
        head++;
    }
}

// size: 큐에 들어있는 정수의 개수를 출력한다.
void size() {
    cout << tail - head;
}

// empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
void empty() {
    if (head == tail) cout << 1;
    else cout << 0;
}

// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void front() {
    if (head == tail) cout << -1;
    else cout << queue[head]; 
}

// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void back() {
    if (head == tail) cout << -1;
    else cout << queue[tail - 1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;

            push(x);
        }
        else {
            if (command == "pop") pop();
            else if (command == "size") size();
            else if (command == "empty") empty();
            else if (command == "front") front();
            else back();

            cout << "\n";
        }
    }
}