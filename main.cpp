#include "IData.h"


int main() {
    LinkedList l1;
    LinkedList l2;

    l1.push_back(6);
    l1.push_back(2);
    l1.push_back(3);

    l2.push_back(6);
    l2.push_back(2);
    l2.push_back(3);

    sum(l1 ,l2);
    print(l1);
    ///////////////////////////////////////////////////////////////////////////
    DoubleLinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    printAtFirst(l);

    l.deletelist();
    printAtFirst(l);

    l.push_back(4);
    l.push_back(2);
    printEnd(l);

    return 0;
}
