#include "IData.h"


int main() {
    DoubleLinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    printAtFirst(l);
    printEnd(l);
    l.deletelist();
    printAtFirst(l);
    printEnd(l);
    l.push_back(4);
    l.push_back(2);
    printAtFirst(l);
    printEnd(l);
    return 0;
}
