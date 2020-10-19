#include "DoublyLinkedNode.h"
#include "../Main.h"

DoublyLinkedNode *createDoublyNode(int data){
    DoublyLinkedNode *node = (DoublyLinkedNode*) malloc(sizeof(DoublyLinkedNode));
    node->data = data;
    node->next = NULL;
    node->previous = NULL;
}
void insertDoublyEnd(DoublyLinkedNode **head,int data){
    if(*head==NULL) *head = createDoublyNode(data);
    else{
        DoublyLinkedNode *aux = *head;
        while(aux->next!=NULL){
            aux = aux->next;
        }
        DoublyLinkedNode *tmp = createDoublyNode(data);
        tmp->previous = aux;
        aux->next = tmp;
    }
}
void removeDoublyNode(DoublyLinkedNode **head,int valueToRemove){
    if(*head==NULL){
        printf("Head is Null, Can't Remove");
        return;
    }else{
        DoublyLinkedNode *aux=*head,*nodeToRemove=NULL;
        while(aux!=NULL){
            if(aux->data==valueToRemove){
                nodeToRemove = aux;
                break;
            }
            aux = aux->next;
        }
        if(nodeToRemove==NULL) 
            printf("This node isn't present in this list!\n");
        else{
            DoublyLinkedNode* prev = nodeToRemove->previous;
            //if nodeToRemove is the head of the list
            if(prev==NULL){
                if((*head)->next==NULL){
                    *head = NULL;
                    return;
                }
                if(nodeToRemove->next!=NULL){
                    *head = nodeToRemove->next;
                    nodeToRemove->next->previous=NULL;
                }
            }else{
                prev->next = nodeToRemove->next;
                //if nodeToRemove is the tail of the list
                if(nodeToRemove->next!=NULL)
                    nodeToRemove->next->previous = prev;
            }
            free(nodeToRemove);
        }
    }
}
void printDoublyLinkedList(DoublyLinkedNode *head){
    if(head==NULL){
        printf("Head is Null\n");
        return;
    }else{
        DoublyLinkedNode *aux = head;
        while(aux!=NULL){
            printf("%d -> ",aux->data);
            aux = aux->next;
        }
        printf("NULL \n");
    }
}
