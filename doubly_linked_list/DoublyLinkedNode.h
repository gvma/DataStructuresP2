#ifndef DoublyLinkedNode_h
#define DoublyLinkedNode_h
typedef struct doublynode DoublyLinkedNode;

struct doublynode{
    DoublyLinkedNode *next,*previous;
    int data;
};

DoublyLinkedNode *createDoublyNode(int data);

void insertDoublyEnd(DoublyLinkedNode **head,int data);

void removeDoublyNode(DoublyLinkedNode **head,int valueToRemove);

void printDoublyLinkedList(DoublyLinkedNode *head);

#endif