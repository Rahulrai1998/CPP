#include <iostream>
#include <vector>
#include <list> // Although we use vector, list is another option

using namespace std;

// The graph is represented using an adjacency list
// where each index i in the outer vector stores a list 
// of vertices adjacent to vertex i.
class Graph {
private:
    int numVertices;
    vector<vector<int>> adjList; // Adjacency list using a vector of vectors

public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int vertices) : numVertices(vertices) {
        // Resize the outer vector to hold 'numVertices' inner vectors
        adjList.resize(numVertices);
    }

    // Function to add an undirected edge between vertices u and v
    void addEdge(int u, int v) {
        // Add v to u's list of neighbors
        adjList[u].push_back(v);
        // Add u to v's list of neighbors (since it's undirected)
        adjList[v].push_back(u);
    }

    // Function to display the adjacency list representation of the graph
    void display() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << ": ";
            // Iterate through all neighbors of vertex i
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

// Main function to test the graph implementation
int main() {
    // Create a graph with 5 vertices (0, 1, 2, 3, 4)
    Graph g(5); 

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List Representation of the Graph:" << endl;
    g.display();

    return 0;
}
