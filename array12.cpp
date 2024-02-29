#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;

    int a[n];
    for(int i=0;i<n-1;i++){
        a[i]=arr[i+k];

    }

    for(int i=0;i<k;i++){
        a[n-k+i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
        
    }
    

    return 0;
}