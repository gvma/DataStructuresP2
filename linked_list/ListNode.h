#ifndef ListNode_h
#define ListNode_h

typedef struct node ListNode;

struct node {
    ListNode *next;
    int data;
};

ListNode *createNode(int data);

void insertEnd(ListNode **head, int data);

void removeNode(ListNode **head, int valueToRemove);

void printList(ListNode *head);

#endif