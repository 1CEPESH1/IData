#include "IData.h"

void print(LinkedList& l){
    Node* p = l.GetHead();
    while(p != nullptr){
        std::cout << p->nameNode << "\t";
        p = p->next;
    }
    std::cout << std::endl;
}
int main() {
    LinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);


    print(l);
    l.deletelist();

    l.push_back(3);
    l.push_back(2);

    print(l);

    return 0;
}
/*если пишем private, то все, что было public становится private, если пишем public
*/