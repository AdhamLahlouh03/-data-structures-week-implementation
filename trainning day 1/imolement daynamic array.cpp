#include <iostream>
#include <exception>
using namespace std;
template<typename T>
class ArrayList {
    T* arr;
    int capacity;
    int size;

    void expand() {
        capacity *= 2;
        T* arr2 = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr2[i] = arr[i];
        }
        delete[]arr;
        arr = arr2;
    }
public:
    ArrayList() {
        capacity = 5;
        size = 0;
        arr = new T[capacity];
    }

    void addToFirst(T value) {
        if (size == capacity) {
            expand();
        }
        for (int i = size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
        size++;
    }

    void removeFromFirst() {
        if (size == 0) return;
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void addToLast(T element) {
        if (size == capacity) {
            expand();
        }
        arr[size] = element;
        size++;
    }

    void romoveLast() {
        if (size != 0) {
            size--;
        }
        else {
            cout << "Empty" << endl;
        }
    }

    void addToIndex(int index, T value) {
        if (size == capacity) {
            expand();
        }
        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        size++;
    }

    void removeByIndex(int index) { // 2
        if (size == 0) return;
        for (int i = index; i < size; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void clear() {
        size = 0;
    }

    int sizeOf() {
        return size;
    }

    int front() {
        return arr[0];
    }

    int back() {
        return arr[size - 1];
    }

    int cap() {
        return capacity;
    }
    void shrink_to_fit() {
        capacity = size;
        int* temp = new T[capacity];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        delete[]arr;
        arr = temp;
    }

    int operator[](int index) { // search
        if (index >= 0 && index < size) return arr[index];
        else throw out_of_range("index out of range");
    }

    void updateElement(int index, T value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
        else {
            cout << "invalid index" << endl;
        }
    }

    bool search(T value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << "--------------" << endl;
    }

    ~ArrayList() {
        delete[]arr;
    }
};
int main()
{
    ArrayList<int> myList;


    myList.addToLast(10);
    myList.addToLast(20);
    myList.addToLast(30);
    myList.addToLast(40);
    myList.addToLast(50);
    myList.addToLast(60);
    myList.print();
    myList.romoveLast();
    myList.print();
    myList.addToLast(70);
    myList.print();// 10 20 30 40 50 70
    myList.addToFirst(100);
    myList.print(); // 100 10 20 30 40 50 70
    myList.removeFromFirst();
    myList.print(); // 10 20 30 40 50 70
    myList.removeFromFirst();
    myList.print(); // 20 30 40 50 70
    myList.addToIndex(2, 300);
    myList.print();
    cout << myList.front() << " " << myList.back() << " " << myList.sizeOf() << endl;
    //myList.shrink_to_fit();
    cout << myList.sizeOf() << " " << myList.cap() << endl;
    //cout<<myList[0]; // search
    myList.updateElement(0, 2000);
    myList.print();

}
