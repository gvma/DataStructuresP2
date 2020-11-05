#include "HashTable.h"
#include "../Main.h"
HashElement* createElement(int key,int value){
    HashElement *element = (HashElement*)malloc(sizeof(HashElement));
    element->key = key;
    element->value = value;
    return element
}
HashTable* createHashTable(){
    HashTable *hash = (HashTable*) malloc(sizeof(HashTable));
    int i;
    for (i=0;i<SIZE;i++) {
        hash->table[i] = NULL;
    }
    return hash;
}
int h(int key){
    return key%SIZE;
}
HashElement* get(HashTable *ht,int key){
    int k = h(key);
    while(ht->table[k]!=NULL){
        if(ht->table[k]->key==key) return ht->table[k];
        k = h(k+1);
    }
    return NULL;
}
void put(HashTable *ht,int key,int value){
    int k = h(key);
    int aux = 0;
    while(ht->table[k]!=NULL){
        if(ht->table[k]==NULL){
            ht->table[k] = createElement(key,value);
            break;
        }
        k = h(k+1);
        aux++;
        if(aux==SIZE){
            printf("The Hash Table is Full\n");
        }
    }
}
void remove(HashTable *ht,int key){
    int k = h(key);
    int aux=0;
    while(ht->table[k]!=NULL){
        if(ht->table[k]->key==key){
            ht->table[k]->key = -1;
            break;
        }
        k = h(k+1);
        aux++;
        if(aux==SIZE){
            printf("This element isn't in the Hash Table\n");
            break;
        }
    }
}