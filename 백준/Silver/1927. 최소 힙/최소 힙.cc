#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> heap;

void push(int x) {
    heap.push_back(x);

    int pos = heap.size() - 1;

    while(heap[pos / 2] > heap[pos]) {
        swap(heap[pos / 2], heap[pos]);
        pos /= 2;
    }
}

void pop() {
    cout << heap[1] << "\n";

    swap(heap[1], heap.back());

    heap.pop_back();

    int pos = 1;

    while(pos * 2 + 1 < heap.size()) {
        if (heap[pos] <= heap[pos * 2] && heap[pos] <= heap[pos * 2 + 1]) break;

        if (heap[pos * 2] >= heap[pos * 2 + 1]) {
            swap(heap[pos * 2 + 1], heap[pos]);
            pos = pos * 2 + 1;
        }
        else {
            swap(heap[pos * 2], heap[pos]);
            pos *= 2;
        }
    }

    if (pos * 2 < heap.size() && heap[pos] > heap[pos * 2]) {
        swap(heap[pos * 2], heap[pos]);
        pos *= 2;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    heap.push_back(0);

    while (n--) {
        int num;
        cin >> num;

        if (num == 0) {
            if (heap.size() == 1) cout << 0 << "\n";
            else pop();
        }
        else push(num);
    }
}