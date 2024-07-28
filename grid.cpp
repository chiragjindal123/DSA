#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, vector<vector<int>>& grid) {
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<vector<int>> dist(n, vector<int>(m, numeric_limits<int>::max()));
    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 0;

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        int jump = grid[r][c];
        for (int d = 0; d < 4; ++d) {
            int nr = r + directions[d][0] * jump;
            int nc = c + directions[d][1] * jump;
            if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                if (dist[nr][nc] > dist[r][c] + 1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
    int result = dist[n - 1][m - 1];
    return result == numeric_limits<int>::max() ? -1 : result;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            grid[i][j]=s[j]-'0';
        }
    }
    cout<<solve(n,m,grid)<<endl;
    return 0;
}