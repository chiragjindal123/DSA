// array search linear and binary
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void linear(int arr[],int n,int k){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"not found";
    }

}


int binary(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    int flag=0;
    while(low<high){
    int mid=(low+high)/2;
    if(arr[mid]==k){
        flag=1;
        return mid;

    }

    if(arr[mid]<k){
        low= mid+1;
    }

    if(arr[mid]>k){
        high=mid-1;
    }
    }
    if(flag==0){
        return -1;
    }

}
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
    int k=5;
    // linear(arr,n,k);
    int z=binary(arr,n,k);
    cout<<z;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;



 return 0;
}