#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int MAX_N = 100005;
long long dp[MAX_N], time[MAX_N];
int treasure[MAX_N];
vector<pair<int, int>> adj[MAX_N]; // adjacency list (node, weight)
int indegree[MAX_N];

void topologicalSort(int n, vector<int>& order) {
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        order.push_back(u);
        
        for (const pair<int, int>& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            if (--indegree[v] == 0) {
                q.push(v);
            }
        }
    }
}

void solve(int n, int k) {
    vector<int> order;
    topologicalSort(n, order);
    
    // Initialize dp with treasure values and time with a large value
    for (int i = 1; i <= n; ++i) {
        dp[i] = treasure[i];
        time[i] = LLONG_MAX; // Use max long long value
    }
    time[1] = 0; // Start from the first node with time 0
    
    for (int u : order) {
        for (const pair<int, int>& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dp[u] + treasure[v] > dp[v]) {
                dp[v] = dp[u] + treasure[v];
                time[v] = time[u] + w;
            } else if (dp[u] + treasure[v] == dp[v]) {
                time[v] = min(time[v], time[u] + w);
            }
        }
    }
    
    // Process queries
    while (k--) {
        int S, E;
        cin >> S >> E;
        cout << dp[E] << " " << time[E] << endl;
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    for (int i = 1; i <= n; ++i) {
        cin >> treasure[i];
    }
    
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        indegree[v]++;
    }
    
    solve(n, k);
    
    return 0;
}
