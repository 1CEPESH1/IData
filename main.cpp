#include "IData.h"


int main() {
    LinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);


    print(l);

    l.deletelist();
    print(l);


    l.push_back(4);
    l.push_back(2);

    print(l);

//    int k = 10;
//    (++k)++;
//    std::cout << k << "\n";
    return 0;
}
/*если пишем private, то все, что было public становится private, если пишем public
*/