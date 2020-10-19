#include "Stack.h"
#include "../Main.h"

Stack *createStack(){
    Stack* s =(Stack*) malloc(sizeof(Stack));
    s->top=NULL;
    s->size=0;
}

void push(Stack *s,int data){
    ListNode* node = createNode(data);
    node->next = s->top;
    s->top = node;
    s->size++;
}

ListNode *pop(Stack *s){
    if(Empty(s)){
        printf("Can't pop when there isn't a node!\n");
        return NULL;
    }else{
        ListNode *peek = s->top;
        s->size--;
        s->top = peek->next;
        peek->next = NULL;
        return peek;
    }
}

ListNode *peek(Stack *s){
    if(!Empty(s)) return s->top;
    return NULL;
}

bool Empty(Stack *s){
    return s->size==0;
}

void printStack(Stack *s){
    if(Empty(s)){
        printf("Empty Stack!\n");
    }else{
        ListNode *head = s->top;
        while(head!=NULL){
            printf("%d -> ",head->data);
            head = head->next;
        }
        printf(" NULL\n");
    }
}