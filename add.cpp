#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl;
 return 0;
}