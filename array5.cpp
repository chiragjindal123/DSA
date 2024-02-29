// sum of subarrays
#include<iostream>
using namespace std;

void maxt(int arr[],int n){
    // cout<<arr[0]<<" ";
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<n;j++){
            temp+=arr[j];
            cout<<temp<<" ";

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

    maxt(arr,n);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<endl;
 return 0;
}