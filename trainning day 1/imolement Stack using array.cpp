#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    int top;
    int capacity;
    T* arr;

    void expand() {
        capacity *= 2;
        T* newArr = new T[capacity];
        for (int i = 0; i <= top; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

public:
    Stack(int initialCapacity = 5) {
        capacity = initialCapacity;
        arr = new T[capacity];
        top = -1;
    }

    void push(T value) {
        if (top + 1 == capacity) {
            expand();
        }
        arr[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        }
        else {
            top--;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }

    void print() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl << "----------" << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.print(); // 30 20 10

    s.pop();
    s.print(); // 20 10

    cout << "Stack size: " << s.size() << endl; // 2
}
