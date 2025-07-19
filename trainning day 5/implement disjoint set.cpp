#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
    vector<int> parent, rank;

public:
    DisjointSet(int size) {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); 
        return parent[x];
    }

    void unionSets(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);
        if (xRoot == yRoot)
            return;

        if (rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        }
        else if (rank[xRoot] > rank[yRoot]) {
            parent[yRoot] = xRoot;
        }
        else {
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
    }

    void printSets() {
        for (int i = 0; i < parent.size(); i++) {
            cout << "Node " << i << " -> Parent " << find(i) << endl;
        }
    }
};

int main() {
    DisjointSet ds(7);
    ds.unionSets(1, 2);
    ds.unionSets(2, 3);
    ds.unionSets(4, 5);
    ds.unionSets(6, 5);
    ds.unionSets(3, 5);

    ds.printSets();

    return 0;
}
