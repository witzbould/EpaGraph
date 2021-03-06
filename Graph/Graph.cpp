// Graph.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "adjMatrix.h"
#include "adjList.h"

int main()
{
	Graph * g = createGraph(5);

	addEdge(g, 2, 3);
	addEdge(g, 3, 2);
	printGraph(g);

	printf("\ntest 2->3? %s", testEdge(g, 2, 3) ? "true" : "false");

	removeEdge(g, 2, 3);
	printf("\ntest 2->3? %s", testEdge(g, 2, 3) ? "true" : "false");

	printf("\nint  : %zu", sizeof(int));
	printf("\nint* : %zu", sizeof(int *));
	printf("\nint**: %zu", sizeof(int **));
	printf("\nGraph: %zu", sizeof(Graph));
	Graph * t = createGraph(19);
	printf("\nGraph19: %zu\n", sizeof(t));

	Graph2 * graph = createGraph2(5);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	printGraph(graph);
	printf("\ntest 2->3? %s", testEdge(graph, 2, 3) ? "true" : "false");
	printf("\ntest 1->3? %s", testEdge(graph, 1, 3) ? "true" : "false");
	removeEdge(graph, 1, 4);
	printf("\ntest 1->4? %s", testEdge(graph, 1, 4) ? "true" : "false");
	printGraph(graph);

	printf("\nAdjListNode: %zu\n", sizeof(AdjListNode));
	printf("AdjList: %zu\n", sizeof(AdjList));
	printf("Graph2: %zu\n", sizeof(Graph2));

	system("pause");
	return 0;
}
