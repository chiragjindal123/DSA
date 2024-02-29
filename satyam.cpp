#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[],int low,int high){
    if(low>=high)
        return;
    int start=low;
    int end=high;
    int index_of_pivot=start+(high-start)/2;
    int pivot=arr[index_of_pivot];
    while(start<=end){
        while(arr[start]<pivot)
            start++;
        while(arr[end]>pivot)
            end--;
        if(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    quickSort(arr,low,end);
    quickSort(arr,start,high);
}

int main(){

    int arr[]={1,4,0,22,20,100,87,-11};
    quickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void r(int n){
//     if(n==0){
//         return;
//     }

//     cout<<"hello";
//     r(n-1);
// }
// int main()
// {   int n=4;
//     r(n);
//  return 0;
// }



// #include <iostream>
// using namespace std;

// #define n 1000

// template <typename T>
// class Stack {

//     T arr[n];
//     int Top =-1;
// public:
//     // Stack() {
//     //     // arr = new T[n];
//     //     Top = -1;
//     // }

//     void push(T x) {
//         if (isFull()) {
//             cout << "stack overflow";
//             return;
//         }
//         Top += 1;
//         arr[Top] = x;
//     }

//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         Top--;
//     }

//     T top() {
//         if (isEmpty()) {
//             cout << "No element to display" << endl;
//             return -1;
//         }
//         return arr[Top];
//     }

//     bool isEmpty() {
//         return Top == -1;
//     }

//     bool isFull() {
//         return Top == n - 1;
//     }
// };

// int main() {
//     Stack<int> s;
//     s.push(23);
//     s.push(24);
//     s.push(25);

//     cout << "Before popping out" << endl;
//     cout << s.top() << endl;

//     s.pop();

//     cout << "After popping out" << endl;
//     cout << s.top() << endl;

//     return 0;
// }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=7,count,i,j;
//     int v[n];
//     int arr[7]={4,5,4,1,1,5,2};
//     for(i=0;i<n;i++){
//         if(v[i]!=1){
//         count=1;
//         for(j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//             count++;
//             v[j]=1;
//             }
//         }
//         cout<<arr[i]<<" "<<count<<endl;
//         }
//     }

//  return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     // Number of rows
//     int rows = matrix.size();
//     cout << "Number of rows: " << rows << endl;

//     // Number of columns (assuming all rows have the same number of columns)
//     int columns = (rows > 0) ? matrix[0].size() : 0;
//     cout << "Number of columns: " << columns << endl;

//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10]={1,1,1,2,2,3,3,4,4,5};
//     map<int,int>mp;
//     for(int i=0;i<10;i++){
//         mp[arr[i]]++;
//     }
//     for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }

//  return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[10] = {1, 1, 1, 2, 2, 3, 3, 4, 4, 5};
//     int n = 10;

//     // Initialize arr2 with zeros
//     int arr2[6] = {0}; // Indices go from 1 to 5

//     for (int i = 0; i < 10; i++) {
//         arr2[arr[i]]++;
//     }

//     for (int i = 1; i <= 5; i++) {
//         cout << i << ": " << arr2[i] << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void swa(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {int a=5,b=6;

// cout<<a<<" "<<b<<endl;
// swa(&a,&b);
// cout<<a<<" "<<b<<endl;
//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int binary(int arr[],int n,int x){
//     int l=0,h=n-1;

//     while(l<=h){
//     int m=l+(h-l)/2;
//         if(arr[m]==x){
//             return m;
//         }

//         if(arr[m]<x){
//             l=m+1;
//         }else{
//             h=m-1;
//         }

//     }
//     return -1;
// }
// int main()
// {
//     int arr[]={1,3,5,6,7,8,9};
//     int n=7;
//     int x=3;
//    int res=binary(arr,n,x);
//    cout<<res;
//  return 0;
// }