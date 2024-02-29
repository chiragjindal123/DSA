// array character palindrome
#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    char arr[len+1];
    cin>>arr;
    int flag=0;
    for(int i=0;i<len;i++){
        if(arr[i] != arr[len-1-i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }
        

 return 0;
}