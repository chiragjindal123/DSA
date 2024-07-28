#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            mat[i][j]=val;
        }
    }
    int sm=0;
    map<int,vector<pair<int,int>>>mp;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            int val=mat[i][j];
            mp[val].push_back({i,j});
         }
    }
    for(auto it:mp){
        for(auto v:it.second){
            cout<<it.first<<"====="<<v.first<<"-->"<<v.second<<endl;
        }
    }
  
    for(auto it:mp){
        vector<pair<int,int>>vec=it.second;
        int curr1=0;
        int curr2=0;
        int sm1=0;
        int sm2=0;
        for(int i=1;i<vec.size();i++){
            int diff1=vec[i].first-vec[i-1].first;
            curr1+=diff1*i;
            sm1+=curr1;
            int diff2=vec[i].second-vec[i-1].second;
           curr2+=diff2*i;
            sm2+=curr2;
        }
            sm+=(sm1+sm2);
    }
    cout<<sm<<endl;
}