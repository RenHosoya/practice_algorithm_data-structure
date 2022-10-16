#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define NIL -1

struct Node {
    int parent;
    int left;
    int right;
    int depth;
    vector<int> child;
    string type;
};

void set_depth(Node T[], int id, int depth) {
    T[id].depth = depth;
    if (T[id].right != NIL) set_depth(T, T[id].right, depth);
    if (T[id].left != NIL) set_depth(T, T[id].left, depth + 1);
}

void set_type(Node T[], int id) {
    if (T[id].parent == NIL) T[id].type = "root";
    else if (T[id].left == NIL) T[id].type = "leaf";
    else T[id].type = "internal node";
}

int main () {
    int i, j, n, root;
    struct Node T[100000];

    cin >> n;
    for (i = 0; i < n; i++) {
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }

    int id, k, c;
    for (i = 0; i < n; i++) {
        cin >> id >> k;
        for (j = 0; j < k; j++) {
            cin >> c;
            T[id].child.push_back(c);
            T[c].parent = id;
        }
    }

}