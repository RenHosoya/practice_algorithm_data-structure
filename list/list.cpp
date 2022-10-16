#include <iostream>
#define N 9

struct LIST
{
    int data;
    struct LIST *next;
};

void printList(struct LIST *p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main () {
    struct LIST p0, p1, p2, p3, p4, p5;
    struct LIST *top;

    p0.data = 75;
    p0.next = &p1;
    
    p1.data = 68;
    p1.next = &p2;
    
    p2.data = 97;
    p2.next = &p3;
    
    p3.data = 43;
    p3.next = &p4;
    
    p4.data = 55;
    p4.next = NULL;

    top = &p0;

    printList(top);

    p1.next = p1.next->next;

    printList(top);

    return 0;
}