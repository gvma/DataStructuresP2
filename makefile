GRAPH = graph/Graph.h graph/Graph.c
LINKED_LIST = linked_list/ListNode.h linked_list/ListNode.c
QUEUE = queue/Queue.h queue/Queue.c
DOUBLY_LINKED_LIST = doubly_linked_list/DoublyLinkedNode.h doubly_linked_list/DoublyLinkedNode.c
STACK = stack/Stack.h stack/Stack.c
MAIN = Main.c Main.h

compile:
	gcc $(DOUBLY_LINKED_LIST) $(GRAPH) $(LINKED_LIST) $(QUEUE) $(STACK)  $(MAIN) -o data_structures -lm
compile_and_run:
	gcc $(DOUBLY_LINKED_LIST) $(GRAPH) $(LINKED_LIST) $(QUEUE) $(STACK) $(MAIN) -o data_structures -lm && ./data_structures