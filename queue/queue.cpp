//キューに必要な関数を定義
#include<iostream>
#include "queue.h"
using namespace std;

MyQueue::MyQueue() : m_head(0), m_tail(0) {
    MAX = sizeof m_q / sizeof m_q[0];
    //配列の要素数を出力
    printf("%d\n", MAX);
}

int MyQueue::size() {
    if (m_tail > m_head ) return m_tail - m_head;
    else return m_tail + MAX - m_head;
}

int MyQueue::front() {
    return m_q[m_head];
}

void MyQueue::pop() {
    if (m_head == m_tail) cout << "Error: queue is empty." << endl;
    else m_head = (m_head + 1) % MAX;
}

void MyQueue::push(int x) {
    if (m_head == (m_tail + 2) % MAX) {
        cout << "Error: queue is full." << endl;
    } else {
        m_tail = (m_tail + 1) % MAX;
        m_q[m_tail] = x;
    }
}

bool MyQueue::empty() {
    if (m_head == m_tail) return true;
    else return false;
}