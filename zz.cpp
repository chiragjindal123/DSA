#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n=4;
    int nums[]={1,2,3,4};

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<i+1;j++){
            sum+=nums[j];
        }
            cout<<sum<<endl;
    }
 return 0;
}