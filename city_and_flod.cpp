#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100007;

int parent[MAXN];
int rankArr[MAXN]; // Renamed to avoid conflict with std::rank

// Function to initialize the parent and rank arrays
void initialise(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rankArr[i] = 0; // Initialize rank to 0
    }
}

// Function to find the root of an element with path compression
int find(int a) {
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

// Function to perform union by rank
void union_by_rank(int a, int b) {
    a = find(a);
    b = find(b);

    if (a == b) // If they are in the same set, no need to merge
        return;

    if (rankArr[a] > rankArr[b]) {
        parent[b] = a;
    } else if (rankArr[a] < rankArr[b]) {
        parent[a] = b;
    } else {
        parent[b] = a;
        rankArr[a]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    initialise(n); // Initialising the parent and rank arrays

    for (int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        union_by_rank(u, v); // Merging the sets containing u and v
    }

    // Counting the number of distinct sets by finding distinct roots
    set<int> distinct_sets;
    for (int i = 1; i <= n; i++) {
        distinct_sets.insert(find(i));
    }

    cout << distinct_sets.size() << "\n";
    return 0;
}
