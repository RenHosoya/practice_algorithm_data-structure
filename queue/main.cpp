#include <iostream>
#include "queue.cpp"
using namespace std;

int main(void) {
    MyQueue queue;

    //空の状態
    if (queue.empty()) {
        cout << "queue is empty" << endl;
    } else {
        cout << "queue is not empty" << endl;
    }

    //要素を加える
    queue.push(1);
    queue.push(2);

    //空の状態
    if (queue.empty()) {
        cout << "queue is empty" << endl;
    } else {
        cout << "queue is not empty" << endl;
    }

    // 要素を取り出す
    cout << "head: " << queue.front() << " size: " << queue.size() << endl;
    queue.pop();
    cout << "head: " << queue.front() << " size: " << queue.size() << endl;
    queue.pop();
    queue.pop(); 

    return 0;

}