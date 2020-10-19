#ifndef graph_h
#define graph_h

#include "../linked_list/ListNode.h"
#include "../Main.h"

typedef struct graph Graph;
typedef struct node ListNode;
typedef struct queue Queue;

struct graph {
    ListNode *adjacencyList[10000];
    bool visited[10000];
    int size;
};

Graph *createGraph();

void clearVisited(Graph *graph);

void addDirectedEdge(Graph *graph, int u, int v);

void addUndirectedEdge(Graph *graph, int u, int v);

void DFS(Graph *graph, int source);

void DFSUtil(Graph *graph, int source);

void BFS(Graph *graph, int source);

void BFSUtil(Graph *graph, int source);

void printGraph(Graph *graph);

#endif