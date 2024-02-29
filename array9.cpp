// smallest missing positive integer
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"enter size:";
    cin>>n;

    int arr[n];
    cout<<"enter elements:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            a=i;
            break;
        }
    }
    for(int i=a;i<n;i++){
       int sum=0;
       for(int j=i;i<n;j++){
        sum+=arr[j];
        if(sum!=((arr[j]*arr[j]+1)/2)){
            cout<<arr[j]-1;
            return 0;
        }
       }
    }
 return 0;
}