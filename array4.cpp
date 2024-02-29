// max till i of elements
#include<iostream>
using namespace std;

void maxt(int arr[],int n){
    // cout<<arr[0]<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[i]){
                arr[i]=arr[j];
            }
        }
        cout<<arr[i]<<" ";
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
    maxt( arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<endl;
 return 0;
}