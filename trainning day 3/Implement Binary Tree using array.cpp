#include<iostream>
using namespace std;
int tree[30];
int set_root(int key) {
    if (tree[0] != -1)
        cout << "Tree already had root";
    else
        tree[0] = key;
    return 0;
}
int set_left(int key, int parent) {
    if (tree[parent] == -1)
        cout << "\nCan't set child at "
        << (parent * 2) + 1
        << " , no parent found";
    else
        tree[(parent * 2) + 1] = key;
    return 0;
}
int set_right(int key, int parent) {
    if (tree[parent] == -1)
        cout << "\nCan't set child at "
        << (parent * 2) + 2
        << " , no parent found";
    else
        tree[(parent * 2) + 2] = key;
    return 0;
}
int print_tree() {
    cout << "\n";
    for (int i = 0; i < 30; i++) {
        if (tree[i] != -1)
            cout << tree[i] << " ";
        else
            cout << "- ";
    }
    return 0;
}


int main() {
    fill_n(tree, 30, -1); 
    set_root(1);
    set_left(2, 0);
    set_right(3, 0);
    set_left(4, 1);
    set_right(5, 1);
    set_right(6, 2);
    set_left(7, 7);
    print_tree();  
    return 0;
}
