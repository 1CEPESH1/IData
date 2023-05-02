#include <iostream>

/*class IData{

};*/

class Node {
public:
    Node* next;
    int nameNode;
    static int countNodes;
};
class LinkedList{
private:
    Node* Head;
public:
    LinkedList();
    ~LinkedList();
    void deletenode(Node* l);
    void deletelist();
    void push_back(int nameNode);
    Node* GetHead();
};
void print(LinkedList& l);
