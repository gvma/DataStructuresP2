GRAPH = graph/Graph.h graph/Graph.c
LINKED_LIST = linked_list/ListNode.h linked_list/ListNode.c
QUEUE = queue/Queue.h queue/Queue.c
MAIN = Main.c Main.h

compile:
	gcc $(GRAPH) $(LINKED_LIST) $(QUEUE) $(MAIN) -o data_structures -lm
compile_and_run:
	gcc $(GRAPH) $(LINKED_LIST) $(QUEUE) $(MAIN) -o data_structures -lm && ./data_structures