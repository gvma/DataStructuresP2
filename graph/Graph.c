#include "Graph.h"
#include "../Main.h"
#include "../queue/Queue.h"

Graph *createGraph() {
    Graph *graph = (Graph*)malloc(sizeof(Graph));
    int i;
    for (i = 0; i <= 10000; ++i) {
        graph->adjacencyList[i] = NULL;
        graph->visited[i] = false;
    }
    return graph;
}

void clearVisited(Graph *graph) {
    int i;
    for (i = 0; i <= 10000; ++i) {
        graph->visited[i] = false;
    }
}

void addDirectedEdge(Graph *graph, int u, int v) {
    insertEnd(&graph->adjacencyList[u], v);
}

void addUndirectedEdge(Graph *graph, int u, int v) {
    insertEnd(&graph->adjacencyList[u], v);
    insertEnd(&graph->adjacencyList[v], u);
}

void DFS(Graph *graph, int source) {
    ListNode *head = graph->adjacencyList[source];
    while (head != NULL) {
        if (!graph->visited[head->data]) {
            printf("Visiting node %d\n", head->data);
            graph->visited[head->data] = true;
            DFS(graph, head->data);
        }
        head = head->next;
    }
}

void DFSUtil(Graph *graph, int source) {
    clearVisited(graph);
    DFS(graph, source);
}

void BFS(Graph *graph, int source) {
    Queue *queue = createQueue();
    enqueue(&queue, source);
    printQueue(queue);
    graph->visited[source] = true;
    while (!isEmpty(queue)) {
        ListNode *from = dequeue(&queue);
        ListNode *to = graph->adjacencyList[from->data];
        while (to != NULL) {
            if (!graph->visited[to->data]) {
                printf("Visiting node %d\n", to->data);
                graph->visited[to->data] = true;
                enqueue(&queue, to->data);
            }
            to = to->next;
        }
    }
}

void BFSUtil(Graph *graph, int source) {
    clearVisited(graph);
    BFS(graph, source);
}

void printGraph(Graph *graph) {
    int i;
    for (i = 0; i <= 10; ++i) {
        printf("ListNode %d:\n", i);
        if (graph->adjacencyList[i] != NULL) {
            printList(graph->adjacencyList[i]);
        }
    }
    for (i = 0; i <= 10; ++i) {
        printf("ListNode %d visited? %d\n", i, graph->visited[i]);
    }
}