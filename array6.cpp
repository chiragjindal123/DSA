// longest arithmetic array
#include<iostream>
using namespace std;

void leg(int arr[],int n){
    int count=1,pd=arr[1]-arr[0],ans=1;
    for(int i=1;i<n-1;i++){
        if((arr[i+1]-arr[i])==pd)
        count++;
        else{
            pd=arr[i+1]-arr[i];
            count=1;
        }
        ans=max(ans,count);
       
    }
    cout<<ans+1;
}
int main()
{int n;
    cout<<"enter size:";
    cin>>n;

    int arr[n];
    cout<<"enter elements:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leg(arr,n);
    cout<<endl;
 return 0;
}