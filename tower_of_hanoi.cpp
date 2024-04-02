#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(int n,char a,char b,char c){
     
    if(n==0) return;

    solve(n-1,a,c,b);
    cout<<a<<" "<<c<<ln;
    solve(n-1,b,a,c);

}
int main()
{
 fast_cin();
     ll n;
     cin>>n;
     cout<<pow(2,n)-1<<ln;
     solve(n,'1','2','3');
 
 return 0;
}


// #include <bits/stdc++.h> 
// using namespace std; 

// void towerOfHanoi(int n, char from_rod, char to_rod, 
// 				char aux_rod) 
// { 
// 	if (n == 0) { 
// 		return; 
// 	} 
// 	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
// 	cout << "Move disk " << n << " from rod " << from_rod 
// 		<< " to rod " << to_rod << endl; 
// 	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
// } 

// // Driver code 
// int main() 
// { 
// 	int N = 3; 

// 	// A, B and C are names of rods 
// 	towerOfHanoi(N, 'A', 'C', 'B'); 
// 	return 0; 
// } 

// // This is code is contributed by rathbhupendra
