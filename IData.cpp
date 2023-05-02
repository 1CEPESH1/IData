#include "IData.h"


LinkedList::LinkedList() {
    Head = nullptr;
}

LinkedList::~LinkedList() {
    deletelist();
}

void LinkedList::push_back(int nameNode) {
    if(Head!=nullptr)
    {
        Node* p = Head;
        while(p->next!=nullptr)
        {
            p = p->next;
        }

        p->next = new Node;
        p = p->next;
        p->next = nullptr;
        p->nameNode = nameNode;
    }
    else
    {
        Head = new Node;
        Node*  p = Head;
        p->next = nullptr;
        p->nameNode = nameNode;
    }
}

Node* LinkedList::GetHead() {
    return Head;
}

void print(LinkedList& l)
{
    Node* p = l.GetHead();
    while(p!=nullptr) {
        std::cout << p->nameNode << std::endl;
        p = p->next;
    }
}

void LinkedList::deletenode(Node* l)
{
    delete l;
}

void LinkedList::deletelist()
{
    Node* x = Head;
    Node* p = x->next;
    while(x->next != nullptr)
    {
        deletenode(x);
        x = p;
        p = x->next;
    }
    Head = nullptr;
}