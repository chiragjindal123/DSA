// array sorting
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int select=i;
        for(int j=i+1;j<n;j++){
            if(arr[select]>arr[j]){
                select=j;
            }
            // swap(&arr[select],&arr[i]);
            swap(arr[select],arr[i]);
        }
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

    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
 return 0;
}