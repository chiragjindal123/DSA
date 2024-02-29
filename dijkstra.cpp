#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;

class Graph {
public:
    int V;
    vector<vector<pair<int, int>>> adj;

    Graph(int vertices) : V(vertices), adj(vertices) {}

    void addEdge(int u, int v, int w) {
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w); // Assuming the graph is undirected
    }

    vector<int> dijkstra(int start) {
        vector<int> dist(V, INF);
        dist[start] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start});

        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            if (d > dist[u]) continue;

            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int w = neighbor.second;

                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 4, 2);
    g.addEdge(2, 4, 8);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 5, 4);

    int startNode = 0;
    vector<int> shortestDistances = g.dijkstra(startNode);

    cout << "Shortest distances from node " << startNode << ":\n";
    for (int i = 0; i < g.V; ++i) {
        cout << "To node " << i << ": " << shortestDistances[i] << "\n";
    }

    return 0;
}
