#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void so(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void pr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{int arr[]={4,3,5,6,2,3,1,7};
int n=8;
so(arr,n);
pr(arr,n);

 return 0;
}