#include<iostream>
using namespace std;

class cq {
    int* arr;
    int currSize, cap;
    int f, r;

public:
    cq(int size) {
        cap = size;
        arr = new int[cap];
        f = 0;
        r = -1;
        currSize = 0;
    }

    void push(int data) {
        if (currSize == cap) {
            cout << "Circular Queue is full" << endl;
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Circular Queue is empty" << endl;
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    int front() {
        if (empty()) {
            cout << "Circular Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    ~cq() {
        delete[] arr;
    }
};

int main() {
    cq q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);  // This fills the queue

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
