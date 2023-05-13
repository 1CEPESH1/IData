#include "IData.h"

/////////////////////////////////////////////LinkedList//////////////////////////////////////////////////////////////
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

void print(LinkedList &l)
{
    Node* p = l.GetHead();
    while(p !=nullptr) {
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

///////////////////////////////////////DoubleLinkedList//////////////////////////////////////////////////////////////


DoubleLinkedList::DoubleLinkedList() {
    Head = nullptr;
    Tail = nullptr;
}

DoubleLinkedList::~DoubleLinkedList() {

}


void DoubleLinkedList::push_back(int nameDoubleNode){
    if(Head!=nullptr)
    {
        DoubleNode* p = Head;

        while(p->next!=nullptr)
        {
            p = p->next;
            Tail = Tail->next;
        }

        p->next = new DoubleNode;
        Tail = p->next;
        Tail->previous = p;
        Tail->next = nullptr;
        Tail->nameDoubleNode = nameDoubleNode;

    }
    else
    {
        Head = new DoubleNode;
        Tail = Head;
        DoubleNode*  p = Head;

        p->next = nullptr;
        Tail->previous = nullptr;
        Tail->next = nullptr;
        Head->previous = nullptr;
        Tail->nameDoubleNode = nameDoubleNode;
        p->nameDoubleNode = nameDoubleNode;
    }
}
DoubleNode* DoubleLinkedList::GetHead() {
    return Head;
}
DoubleNode* DoubleLinkedList::GetTail() {
    return Tail;
}

void printAtFirst(DoubleLinkedList& l)
{
    DoubleNode* p = l.GetHead();
    while(p!=nullptr) {
        std::cout << p->nameDoubleNode << std::endl;
        p = p->next;
    }
}

void printEnd(DoubleLinkedList& l)
{
    DoubleNode* p = l.GetTail();
    while(p!=nullptr) {
        std::cout << p->nameDoubleNode << std::endl;
        p = p->previous;
    }
}

void DoubleLinkedList::deletenode(DoubleNode* l){
    delete l;
}

void DoubleLinkedList::deletelist(){
    DoubleNode* x = Head;
    DoubleNode* p = x->next;
    while(x->next != nullptr)
    {
        deletenode(x);
        x = p;
        p = x->next;
    }
    Head = nullptr;
    Tail = nullptr;
}

/////////////////////////////////////////SUM_LIST///////////////////////////////////////////////////////

void sum(LinkedList(l1) , LinkedList (l2))
{

    Node* current1 = l1.LinkedList::GetHead();
    Node* current2 = l2.LinkedList::GetHead();
    while (current1 != nullptr)
    {
        current1->nameNode += current2->nameNode;
        if (current1->nameNode < 10)
        {
            current1 = current1->next;
            current2 = current2->next;

        }
        else
        {
            current1->nameNode %= 10;

            current1 = current1->next;
            current2 = current2->next;

            current2->nameNode++;

            if (current1->next == nullptr)
            {
                l1.push_back(1);
            }
        }
    }
}