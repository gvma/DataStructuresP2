GRAPH = graph/Graph.h graph/Graph.c
LINKED_LIST = linked_list/ListNode.h linked_list/ListNode.c
QUEUE = queue/Queue.h queue/Queue.c
DOUBLY_LINKED_LIST = doubly_linked_list/DoublyLinkedNode.h doubly_linked_list/DoublyLinkedNode.c
STACK = stack/Stack.h stack/Stack.c
MAIN = Main.c Main.h
HASH_TABLE = hash_table/HashTable.h hash_table/HashTable.c
LINKED_HASH_TABLE = hash_table/LinkedHashTable.h hash_table/LinkedHashTable.c
compile:
	gcc $(DOUBLY_LINKED_LIST) $(GRAPH) $(LINKED_LIST) $(QUEUE) $(STACK) $(HASH_TABLE) $(LINKED_HASH_TABLE) $(MAIN) -o data_structures -lm
compile_and_run:
	gcc $(DOUBLY_LINKED_LIST) $(GRAPH) $(LINKED_LIST) $(QUEUE) $(STACK) $(HASH_TABLE) $(LINKED_HASH_TABLE) $(MAIN) -o data_structures -lm && ./data_structures