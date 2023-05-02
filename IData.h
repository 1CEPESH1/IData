#include <iostream>

/*class IData{

};*/

struct Node {
    Node* next;
    int nameNode;
    static int countNodes;
};
class LinkedList{
private:
    Node* Head;
public:
    LinkedList() {
        Head = nullptr;
    };
    ~LinkedList() {
        deletelist();
    };
    void deletenode(Node* l) {
        delete l;
    }
    void deletelist() {
        Node* p = Head;
        Node* d = p->next;
        while (d != nullptr) {
            deletenode(p);
            p = d;
            d = p->next;
        }
        Head = nullptr;
    }
    void push_back(int nameNode){
        if(Head == nullptr){
            Head = new Node;
            Head->next = nullptr;
            Head->nameNode = nameNode;
        }
        else{
            Node* p = Head;
            while(p != nullptr){
                p = p->next;
            }
            p = new Node;
            p->nameNode = nameNode;
            p->next = nullptr;
        }
    }
    Node* GetHead() {
        return Head;
    }
};

