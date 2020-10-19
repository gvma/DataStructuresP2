#ifndef Stack_h
#define Stack_h
#include "../linked_list/ListNode.h"
#include "../Main.h"

typedef struct stack Stack;
typedef struct node ListNode;

struct stack{
    ListNode *top;
    int size;
};

Stack *createStack();

void push(Stack *s,int data);

ListNode *pop(Stack *s);

ListNode *peek(Stack *s);
bool Empty(Stack *s);

void printStack(Stack *s);
#endif