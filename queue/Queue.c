#include "Queue.h"
#include "../Main.h"

Queue *createQueue() {
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->head = NULL;
    queue->size = 0;
    return queue;
}

bool isEmpty(Queue *queue) {
    return queue->size == 0;
}

void enqueue(Queue **queue, int data) {
    (*queue)->size++;
    if ((*queue)->head == NULL) {
        (*queue)->head = createNode(data);
        return;
    }
    ListNode *aux = (*queue)->head;
    while (aux->next != NULL) {
        aux = aux->next;
    }
    aux->next = createNode(data);
}

ListNode *dequeue(Queue **queue) {
    if (isEmpty(*queue)) {
        printf("Can't dequeue when there isn't a node!\n");
        return NULL;
    } else {
        ListNode *dequeued = (*queue)->head;
        (*queue)->size--;
        (*queue)->head = dequeued->next;
        return dequeued;
    }
}

void printQueue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Empty queue!");
    } else {
        ListNode *head = queue->head;
        while (head != NULL) {
            printf("%d -> ", head->data);
            head = head->next;
        }
    }
    printf("\n");
}