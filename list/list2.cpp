#include <iostream>>
using namespace std;

class LinkedList {
    private:
        class Node {
            public: 
                int key;
                Node *prev;
                Node *next;
        };

    Node *nil; //番兵

    //keyをノードを探す
    Node *list_search(int key) {
        Node *current = nil->next;
        while(current != nil && current->key != key) {
            current = current->next;
        }
        return current;
    }
};