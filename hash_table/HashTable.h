#ifndef HashTable_h
#define HashTable_h
#include "../Main.h"
#define SIZE 100
/*
* Implementacao de Hash Table sem utilizar lista encadeada
*/

typedef struct element HashElement;
typedef struct hashtable HashTable;
struct element{
    int key;
    int value;
};
struct hashtable{
    HashElement *table[SIZE];
};

HashElement* createElement(int key,int value);

HashTable* createHashTable();

int h(int key);

HashElement* get(HashTable *ht,int key);

void put(HashTable *ht,int key,int value);

void remove(HashTable *ht,int key);

#endif