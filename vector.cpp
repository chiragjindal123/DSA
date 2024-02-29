#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v{1,2,3,4};
    // int n=v.size();
    // cout<<v[1];

        vector<int>nums1{1,2};
        vector<int>nums2{3,4};
        vector<int> mp;
        float x,y,z;
        for(int i=0;i<nums1.size();i++){
            mp.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            mp.push_back(nums2[i]);
        }

        sort(mp.begin(),mp.end());

        int n=mp.size();

        if(n%2==0){
            x= n/2;
            y=x-1;

            z=mp[x]+mp[y];
            float b=z/2;
            cout<< b;

        }else{
          float  x=n/2;
            cout<< mp[x];
        }
 return 0;
}