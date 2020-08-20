#include "dijkstras.h"

int main() {
	// creating the graph.
	vector<vector<int>> graph;

	// ensure there is enough in the vectors
	graph.resize(vertexCount);
	for (int i = 0; i < vertexCount; i++) {
		graph[i].resize(vertexCount);
	}

	//populate edges from user input
	for (int j = 0; j < vertexCount; j++) {
		cout << "Input distances from source to each vertex separated by spaces (0 for no connection). ";
		// set to 1 meaning that v1 and v2 are connected
		for (int k = 0; k < vertexCount; k++) {
			cin >> graph[j][k];
		}
	}

	dijkstras(graph, 0);

	return 0;
}