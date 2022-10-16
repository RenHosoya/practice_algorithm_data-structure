//stackを操作する関数を定義
#include <iostream>
#include "stack.h"
using namespace std;

//メンバイニシャライザ→メンバ変数の初期化
Stack::Stack() : m_top(0) {
    cout << "オブジェクト生成" << endl;
}

int Stack::size() {
    return m_top;
}

int Stack::top() {
    return m_s[m_top];
}

void Stack::pop() {
    if (m_top == 0) {
        cout << "Error: stack is empty." << endl;
    } else {
        m_top--;
    }
}

void Stack::push(int x) {
    if (m_top == sizeof(m_s)/ sizeof(m_s[0]) -1 ) {
        cout << "Error: stck is full" << endl;
    } else {
        m_s[++m_top] = x;
    }
}

bool Stack::empty() {
    if (m_top == 0) {
        return true;
    } else {
        return false;
    }
}