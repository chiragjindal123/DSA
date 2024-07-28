#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 20;
const int infinity = 99999;
int graph[MAX][MAX];
int V, E;

void dijkstra(int G[MAX][MAX], int n, int startnode) {
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    bool visited[MAX];
    int cnt, mindistance, nextnode, i, j;

    // Initialize cost matrix
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (G[i][j] == 0) {
                cost[i][j] = infinity;
            } else {
                cost[i][j] = G[i][j];
            }
        }
    }

    // Initialize distance, pred, visited arrays
    for (i = 1; i <= n; i++) {
        distance[i] = cost[startnode][i];
        pred[i] = startnode; // Initialize predecessor array correctly
        visited[i] = false;
    }

    distance[startnode] = 0;
    visited[startnode] = true;
    cnt = 1;

    while (cnt < n - 1) {
        mindistance = infinity;

        // Find the next node to visit
        for (i = 1; i <= n; i++) {
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }
        }

        visited[nextnode] = true;

        // Update distances and predecessors
        for (i = 1; i <= n; i++) {
            if (!visited[i]) {
                if (mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode; // Update predecessor array correctly
                }
            }
        }

        cnt++;
    }

    // Print results
    cout << "Node\tDistance\tPath\n";
    for (i = 1; i <= n; i++) {
        if (i != startnode) {
            if (distance[i] == infinity) {
                cout << setw(4) << i << setw(14) << "INF" << setw(12) << "NO PATH" << endl;
            } else {
                cout << setw(4) << i << setw(14) << distance[i] << setw(12) << i;
                int temp = pred[i];
                while (temp != startnode) {
                    cout << "<-" << temp;
                    temp = pred[temp];
                }
                cout << "<-" << startnode; // Include the source node in the path
                cout << endl;
            }
        }
    }
}

int main() {
    int s, d, w, i, j;

    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Initialize graph matrix
    for (i = 1; i <= V; i++) {
        for (j = 1; j <= V; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges and weights
    for (i = 1; i <= E; i++) {
        cout << "Enter source: ";
        cin >> s;
        cout << "Enter destination: ";
        cin >> d;
        cout << "Enter weight: ";
        cin >> w;
        graph[s][d] = w;
        graph[d][s] = w; // if the graph is undirected
    }

    int source;
    cout << "Enter the source: ";
    cin >> source;

    dijkstra(graph, V, source);

    return 0;
}
