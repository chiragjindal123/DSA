#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void permute(vector<int>a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
	permute(a,0);

    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
        }
            cout<<"\n";
    }
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void permute(string& a, int l, int r)
// {
// 	if (l == r)
// 		cout << a << endl;
// 	else {
// 		for (int i = l; i <= r; i++) {

// 			swap(a[l], a[i]);

// 			permute(a, l + 1, r);

// 			swap(a[l], a[i]);
// 		}
// 	}
// }
// int main()
// {
// 	string str = "ABC";
// 	int n = str.size();

// 	permute(str, 0, n - 1);
// 	return 0;
// }
