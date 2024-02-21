#include <iostream>
#include <vector>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int source, destination, weight;
};

// Function to perform Bellman-Ford algorithm
void bellmanFord(vector<Edge>& edges, int V, int E, int source) {
    vector<int> distance(V, INT_MAX);
    distance[source] = 0;

    // Relax all edges V-1 times
    for (int i = 0; i < V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].source;
            int v = edges[j].destination;
            int w = edges[j].weight;
            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
            }
        }
    }

    // Check for negative weight cycles
    for (int i = 0; i < E; i++) {
        int u = edges[i].source;
        int v = edges[i].destination;
        int w = edges[i].weight;
        if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
            cout << "Graph contains a negative weight cycle." << endl;
            return;
        }
    }

    // Print the shortest distances
    cout << "Shortest distances from the source vertex:" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": " << distance[i] << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> edges(E);

    for (int i = 0; i < E; i++) {
        cin >> edges[i].source >> edges[i].destination >> edges[i].weight;
    }

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    bellmanFord(edges, V, E, source);

    return 0;
}
