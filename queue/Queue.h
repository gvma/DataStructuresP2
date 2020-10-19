#ifndef queue_h
#define queue_h

#include "../linked_list/ListNode.h"
#include "../Main.h"

typedef struct queue Queue;
typedef struct node ListNode;

struct queue {
    ListNode *head;
    int size;
};

Queue *createQueue();

bool isEmpty(Queue *queue);

void enqueue(Queue **queue, int data);

ListNode *dequeue(Queue **queue);

void printQueue(Queue *queue);

#endif