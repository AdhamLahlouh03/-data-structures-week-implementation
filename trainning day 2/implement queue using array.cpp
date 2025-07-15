#include <iostream>
using namespace std;

template<typename T>
class Queue {
private:
    T* arr;
    int front, rear, capacity, size;

public:
    Queue(int cap = 100) {
        capacity = cap;
        arr = new T[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == capacity;
    }

    void push(T x) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        else {
            rear++;
            arr[rear] = x;
            size++;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        else {
            front++;
            size--;
        }
    }

    T getFront() {
        if (!isEmpty())
            return arr[front];
    }
    T getBack() {
        if (!isEmpty())
            return arr[rear];
    }
    int getSize() {
        return size;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);

    /*
    cout << "Front: " << que.getFront() << endl;
    cout << "Back: " << que.getBack() << endl;
    cout << "Size: " << que.Size() << endl;

    que.pop();
    cout << "After pop:" << endl;
    cout<<"Front: " << que.getFront() << " " << " Size : " << que.getSize() << endl;
    */

    while (!que.isEmpty()) {
        cout << que.getFront() << " ";
        que.pop();
    }
}
