#include <iostream>

/////////////////////////////////////////////LinkedList//////////////////////////////////////////////////////////////

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

///////////////////////////////////////////DoubleLinkedList/////////////////////////////////////////////////////////

class DoubleNode {
public:
    DoubleNode* next;
    DoubleNode* previous;
    int nameDoubleNode;
    static int countNodes;
};
class DoubleLinkedList{
private:
    DoubleNode* Head;
    DoubleNode* Tail;
public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void deletenode(DoubleNode* l);
    void deletelist();
    void push_back(int nameDoubleNode);
    DoubleNode* GetHead();
    DoubleNode* GetTail();
};
void printAtFirst(DoubleLinkedList& l);
void printEnd(DoubleLinkedList& l);
void sum(LinkedList (l1) , LinkedList (l2));