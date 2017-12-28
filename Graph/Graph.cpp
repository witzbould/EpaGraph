// Graph.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "adjMatrix.h"

int main()
{
	Graph * g = createGraph(5);

	addEdge(g, 2, 3);
	addEdge(g, 3, 2);
	printAdjMatrix(g);

	printf("\ntest 2->3? %s\n", testEdge(g, 2, 3) ? "true" : "false");

	removeEdge(g, 2, 3);
	printf("\ntest 2->3? %s\n", testEdge(g, 2, 3) ? "true" : "false");

	system("pause");
	return 0;
}
