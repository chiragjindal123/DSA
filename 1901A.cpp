#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int j=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            int a=arr[i]-j;
            maxi=max(maxi,a);
            j=arr[i];
        }
        int b=2*(k-arr[n-1]);
        maxi=max(maxi,b);
        cout<<maxi<<endl;


    }
 return 0;
}