#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node() { // Node *n=new Node;
        this->value = 0;
        this->right = nullptr;
        this->left = nullptr;
    }
    Node(int value) {// Node *n=new Node(5);
        this->value = value;
        this->right = nullptr;
        this->left = nullptr;
    }
    Node(int value, Node* left, Node* right) {
        this->value = value;
        this->right = right;
        this->left = left;
    }
};
class BST {
    Node* root;
public:
    BST() {
        root = nullptr;
    }
    bool Search(int value) {
        Node* p = root;
        while (p != nullptr) {
            if (p->value == value) return true;
            if (value > p->value) {
                p = p->right;
            }
            else {
                p = p->left;
            }
        }
        return false;
    }
    void addValue(int value) {
        // search
        if (Search(value)) {
            return;
        }
        Node* n = new Node(value);
        // empty
        if (root == nullptr) {
            root = n;
            return;
        }
        Node* p = root;
        while (true) {
            if (value > p->value) {
                if (p->right == nullptr) break;
                p = p->right;
            }
            else {
                if (p->left == nullptr) break;
                p = p->left;
            }
        }
        if (value > p->value) {
            p->right = n;
        }
        else {
            p->left = n;
        }
    }
    int getMin() {
        Node* p = root;
        while (p->left != nullptr) {
            p = p->left;
        }
        return p->value;
    }

    int getMax() {
        Node* p = root;
        while (p->right != nullptr) {
            p = p->right;
        }
        return p->value;
    }
};
int main()
{
    BST myTree;
    myTree.addValue(100);
    myTree.addValue(50);
    myTree.addValue(110);
    myTree.addValue(10);
    myTree.addValue(150);
    myTree.addValue(140);

    cout << myTree.getMax() << " " << myTree.getMin();

}
