#include <iostream>
#include <vector>
#include <queue>
#include <numeric>

using namespace std;

vector<int> bfs(int start, const vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    vector<int> component;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        component.push_back(node);

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return component;
}

bool is_settlement_possible(int n, int m, const vector<int>& balances, const vector<pair<int, int>>& friendships) {
    vector<vector<int>> graph(n);
    for (const auto& friendship : friendships) {
        int u = friendship.first;
        int v = friendship.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            vector<int> component = bfs(i, graph, visited);
            int component_sum = 0;
            for (int person : component) {
                component_sum += balances[person];
            }
            if (component_sum != 0) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> balances(n);
    for (int i = 0; i < n; ++i) {
        cin >> balances[i];
    }

    vector<pair<int, int>> friendships(m);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        friendships[i] = {u, v};
    }

    bool possible = is_settlement_possible(n, m, balances, friendships);
    cout << (possible ? "POSSIBLE" : "IMPOSSIBLE") << endl;

    return 0;
}
