#include "IData.h"


int main() {
    LinkedList l1;
    LinkedList l2;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);

    sum(l1 ,l2);
    print(l1);
    ///////////////////////////////////////////////////////////////////////////
//    LinkedList l;
//    l.push_back(1);
//    l.push_back(2);
//    l.push_back(3);
//    print(l);
//
//    l.deletelist();
//    print(l);
//
//    l.push_back(4);
//    l.push_back(2);
//    print(l);

    return 0;
}
