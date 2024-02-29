#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;

    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    vector<int> topologicalSort() {
        vector<bool> visited(V, false);
        stack<int> stack;

        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                topologicalSortUtil(i, visited, stack);
            }
        }

        vector<int> result;
        while (!stack.empty()) {
            result.push_back(stack.top());
            stack.pop();
        }
        return result;
    }

    void topologicalSortUtil(int v, vector<bool>& visited, stack<int>& stack) {
        visited[v] = true;

        for (int i : adj[v]) {
            if (!visited[i]) {
                topologicalSortUtil(i, visited, stack);
            }
        }

        stack.push(v);
    }
};

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    vector<int> topologicalOrder = g.topologicalSort();

    cout << "Topological Sort: ";
    for (int vertex : topologicalOrder) {
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
