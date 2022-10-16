#include <iostream>
#include "stack.cpp"
using namespace std;

int main(void) {
    //インスタンス化
    Stack stack;

    //空の状態
    if (stack.empty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    //要素を追加
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    cout << "top: " << stack.top() << " size: " << stack.size() << endl;

    return 0;
}