#ifndef LinkedHashTable_h
#define LinkedHashTable_h
#define SIZE 100
typedef struct element_node ElementNode;
typedef struct linkedhashtable LinkedHashTable;
struct element_node{
    int key;
    int value;
    ElementNode *next;
};
struct linkedhashtable{
    ElementNode *table[SIZE];
};

ElementNode* createElementNode(int key,int value);

LinkedHashTable* createLinkedHashTable();

int hash(int key);

ElementNode *get(LinkedHashTable *ht,int key);

void put(LinkedHashTable *ht,int key,int value);

void putInEnd(LinkedHashTable *ht,int key,int value);

void removeElement(ElementNode **head,int key);

void remove(LinkedHashTable *ht,int key);

void printList(LinkedHashTable *ht,int size);

#endif
