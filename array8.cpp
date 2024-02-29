// sum of subarrays kadane algo
#include<iostream>
using namespace std;

void maxt(int arr[],int n,int k){
    // cout<<arr[0]<<" ";
    // int a[n]={0};
    int flag=0;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<n;j++){
            temp+=arr[j];
            // cout<<temp<<" ";
            // a[j]=i;
            if(temp==k){
                cout<<i<<" "<<j;
                flag=1;
                break;
            }

        }
        if(flag==1){
            break;
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
    int k=12;

    maxt(arr,n,k);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<endl;
 return 0;
}