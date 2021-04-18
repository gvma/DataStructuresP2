#include "ListNode.h"
#include "../Main.h"

ListNode *createNode(int data) {
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(ListNode **head, int data) {
    if (*head == NULL) {
        *head = createNode(data);
    } else {
        ListNode *aux = *head;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = createNode(data);
    }
}

void insertBeginning(ListNode** head, int data)
{
    ListNode* newnode = createNode(data);
    newnode->next = *head;

    *head = newnode;
}

ListNode *reverse(ListNode *previous, ListNode *current)
{
    ListNode *next;

    if(current == NULL)
        return previous;
    
    next = current->next;
    current->next = previous;
    previous = current;
    current = next;

    return reverse(previous, current);
}

void removeNode(ListNode **head, int valueToRemove) {
    ListNode *aux = *head, *nodeToRemove = NULL;
    if (*head == NULL) {
        printf("Head is NULL, can't remove!\n");
        return;
    } else {
        ListNode *prev = NULL;
        while (aux != NULL) {
            if (aux->data == valueToRemove) {
                nodeToRemove = aux;
                break;
            }
            prev = aux;
            aux = aux->next;
        }
        if (nodeToRemove == NULL) {
            printf("This node isn't present in this list!\n");
            return;
        } else {
            if (prev == NULL) {
                if ((*head)->next == NULL) {
                    *head = NULL;
                    return;
                }
                if (nodeToRemove->next != NULL) {
                    *head = nodeToRemove->next;
                }
            } else {
                prev->next = nodeToRemove->next;
            }
            free(nodeToRemove);
        }
    }
}

void printList(ListNode *head) {
    if (head == NULL) {
        printf("Head is NULL!\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);    
        head = head->next;
    }
    printf("\n");
}