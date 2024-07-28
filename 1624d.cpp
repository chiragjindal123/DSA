#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;

        cin>>n>>k;

        string s;

        cin>>s;


        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }

        int pair=0;
        int single=0;
       
       for(auto &x:mp){
        pair+=x.second/2;
        single+=x.second%2;
       }

        int len=(pair/k)*2;

        if(2 * (pair % k) + single>=k){
            len++;
        }

        cout<<len<<endl;
    }
 return 0;
}