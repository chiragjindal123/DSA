// first repeating index
#include<iostream>
using namespace std;

void rep(int arr[],int n){
    int flag=0;
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
            if(arr[i]==arr[j+1]){
                cout<<i<<" ";
                flag=1;
                break;
            }
       }if(flag==1)
        break;
    }
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
    rep(arr,n);

    cout<<endl;
 return 0;
}