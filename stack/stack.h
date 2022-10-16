//stackクラスを定義
#ifndef _STACK_H_
#define _STACK_H_

class Stack {
    private:
        int m_top; //スタックポインタ
        int m_s[11]; // スタックの実態となる配列
    public:
        Stack();
        int size();
        int top();
        void pop();
        void push(int x);
        bool empty();
};

#endif 