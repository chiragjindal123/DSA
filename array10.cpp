#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int k=9;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                cout<<i<<","<<j;
                flag=1;
                return 0;
            }
        }
    }
    if(flag){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}