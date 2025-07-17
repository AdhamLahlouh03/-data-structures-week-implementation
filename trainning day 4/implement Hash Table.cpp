#include <iostream>
#include <list>
using namespace std;

class HashTable {
    static const int SIZE = 10;
    list<pair<int, string>> table[SIZE];

    int hashFunction(int key) {
        return key % SIZE;
    }

public:
    void insert(int key, string value) {
        int index = hashFunction(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value; 
                return;
            }
        }
        table[index].push_back({ key, value });
    }

    string search(int key) {
        int index = hashFunction(key);
        for (auto& pair : table[index]) {
            if (pair.first == key)
                return pair.second;
        }
        return "Not Found";
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove_if([key](pair<int, string> p) { return p.first == key; });
    }

    void print() {
        for (int i = 0; i < SIZE; i++) {
            cout << "[" << i << "]: ";
            for (auto& pair : table[i]) {
                cout << "(" << pair.first << ", " << pair.second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(1, "adham");
    ht.insert(11, "amjad");
    ht.insert(21, "mahmoud");

    ht.print();

    cout << "Search key 11: " << ht.search(11) << endl;

    ht.remove(11);
    cout << "After removing key 11: " << endl;
    ht.print();

    return 0;
}
