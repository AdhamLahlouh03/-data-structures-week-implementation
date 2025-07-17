#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST {
    Node* root;

public:
    BST() {
        root = nullptr;
    }

    void addValue(int value) {
        Node* n = new Node(value);
        if (root == nullptr) {
            root = n;
            return;
        }

        Node* p = root;
        Node* prev = nullptr;
        while (p != nullptr) {
            prev = p;
            if (value < p->value)
                p = p->left;
            else
                p = p->right;
        }

        if (value < prev->value)
            prev->left = n;
        else
            prev->right = n;
    }

    void InOrder(Node* r) {
        if (r == nullptr) return;
        InOrder(r->left);
        cout << r->value << " ";
        InOrder(r->right);
    }

    void PreOrder(Node* r) {
        if (r == nullptr) return;
        cout << r->value << " ";
        PreOrder(r->left);
        PreOrder(r->right);
    }

    void PostOrder(Node* r) {
        if (r == nullptr) return;
        PostOrder(r->left);
        PostOrder(r->right);
        cout << r->value << " ";
    }

    void print() {
        cout << "InOrder: ";
        InOrder(root);
        cout << "\nPreOrder: ";
        PreOrder(root);
        cout << "\nPostOrder: ";
        PostOrder(root);
        cout << endl;
    }
};

int main() {
    BST tree;
    tree.addValue(10);
    tree.addValue(5);
    tree.addValue(12);
    tree.addValue(1);
    tree.addValue(11);
    tree.addValue(13);

    tree.print();
}
