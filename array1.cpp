// min and max of array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int maxa=INT_MIN;
    int mina=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maxa){
            maxa=arr[i];
        }
        if(arr[i]<mina){
            mina=arr[i];
        }
    }
            cout<<maxa<<endl;
   
            cout<<mina<<endl;
        
    


 return 0;
}