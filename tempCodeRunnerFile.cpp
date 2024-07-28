#include<bits/stdc++.h>
using namespace std;

int minimum(int i, int j, vector<vector<int>>& mat, vector<vector<int>>& dp) {
    int n = mat.size();
    int m = mat[0].size();
    if (i == n - 1 && j == m - 1) {
        return 0;
    }

  
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int val = mat[i][j];
    int op1 = INT_MAX; 
    int op2 = INT_MAX; 
    int op3=INT_MAX;
    int op4=INT_MAX;

    if (j + val < m) {
        op1 = 1 + minimum(i, j + val, mat, dp);
    }

    
    if (i + val < n) {
        op2 = 1 + minimum(i + val, j, mat, dp);
    }

    if(j-val >=0){
         op3 = 1 + minimum(i, j - val, mat, dp);
    }
    if(i-val >=0){
         op4 = 1 + minimum(i-val, j, mat, dp);
    }

    return dp[i][j] = min({op1, op2,op3,op4});
}

int main() {
    int n, m;
    cin >> n >> m;

    
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    
    vector<vector<int>> dp(n, vector<int>(m, -1));


    int steps = minimum(0, 0, mat, dp);


    if (steps == INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << steps << endl;
    }

    return 0;
}