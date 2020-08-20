#include "dijkstras.h"

void dijkstras(vector<vector<int>> graph, int src) {
	int dist[vertexCount];
	bool isDistSet[vertexCount];
	for (int i = 0; i < vertexCount; i++)
	{
		dist[i] = INT_MAX;
		isDistSet[i] = false;
	}
	dist[src] = 0;
	int x;
	for (int c = 0; c < vertexCount; c++)
	{
		int min = INT_MAX;
		int index;
		for (int j = 0; j < vertexCount; j++) {
			if (!isDistSet[j] && dist[j] <= min) {
				min = dist[j];
				index = j;
			}
		}
		x = index;
		isDistSet[x] = true;
		for (int k = 0; k < vertexCount; k++)
			
		{
			if (!isDistSet[k] && graph[x][k] && dist[x] != INT_MAX && dist[x] + graph[x][k] < dist[k])
				dist[k] = dist[x] + graph[x][k];
		}
	}
	for (int i = 0; i < vertexCount; i++) {
		char s = 'A' + src;
		char d = 'A' + i;
		cout << "Cost from source " << s << " to " << d << ": " << dist[i] << endl;
	}
}