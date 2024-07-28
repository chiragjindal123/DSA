// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> p32;
// typedef pair<ll,ll> p64;
// typedef pair<double,double> pdd;
// typedef vector<ll> v64;
// typedef vector<int> v32;
// typedef vector<vector<int> > vv32;
// typedef vector<vector<ll> > vv64;
// typedef vector<vector<p64> > vvp64;
// typedef vector<p64> vp64;
// typedef vector<p32> vp32;
// ll MOD = 998244353;
// double eps = 1e-12;
// #define forn(i,e) for(ll i = 0; i < e; i++)
// #define forsn(i,s,e) for(ll i = s; i < e; i++)
// #define rforn(i,s) for(ll i = s; i >= 0; i--)
// #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// #define ln "\n"
// #define dbg(x) cout<<#x<<" = "<<x<<ln
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
 

// void solve(){
//     string s;
//     cin>>s;
//     // ll arr[n];

//     // for(int i = 0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     // int j=0;
//     // int count=1;
//     int ans=INT_MIN;
//     for(int i=0;i<s.size();i++){
//         int j=i;

//         while(j < s.size()-1 && s[j]==s[j+1]){
//             j++;
//         }
//         ans=max(ans,j-i+1);
//         i=j;

//     }
//     cout<<ans;
// }
// int main()
// {
//  fast_cin();
// //  ll t;
// //  cin >> t;
//  solve();
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int lion=0;
    for(int i=0;i<n;i++){
        if(str[i]=='T')lion++;
    }
    int goat=n-lion;
    int mn=INT_MAX;
    //case 1
    int i=0,j=0;
    int l=0,g=0;
    while(j<lion){
     if(str[j]=='T')l++;
    
     j++;
    }
    while(j<n){
        mn=min(mn,lion-l);
       
        if(str[i]=='T')l--;
       
        i++;
        if(str[j]=='T')l++;
       
        j++;
    }
    mn=min(mn,lion-l);
    //case2
    i=0,j=0;
    while(j<goat){
        if(str[j]=='H')g++;
        j++;
    }
     while(j<n){
        mn=min(mn,goat-g);
       
        if(str[i]=='H')g--;
       
        i++;
        if(str[j]=='H')g++;
       
        j++;
    }
    mn=min(mn,goat-g);
    //working
    cout<<mn<<endl;
}