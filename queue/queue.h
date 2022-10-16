//クラスの定義
#ifndef _MY_QUEUE_H_
#define _MY_QUEUE_H_

class MyQueue {
    private:
        int m_head;
        int m_tail;
        int MAX;
        int m_q[100000];
    
    public:
        MyQueue();
        int size();
        int front();
        void pop();
        void push(int x);
        bool empty();
};

#endif

