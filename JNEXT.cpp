#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i;
        for (i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                break;
            }
        }

        if (i < 0) {
            cout << -1 << endl;
        } else {
            int j;
            for (j = n - 1; j > i; j--) {
                if (arr[j] > arr[i]) {
                    break;
                }
            }

            swap(arr[i], arr[j]);

            sort(arr.begin() + i + 1, arr.end());

            for (int k = 0; k < n; k++) {
                cout << arr[k];
            }
            cout << endl;
        }
    }
    return 0;
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin>>t;

//    while(t--){

//         vector<int> v;
//         stack<int> s;

//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         for (int i = n - 1; i >= 0; i--) {
//             int ele = arr[i];
//             while (!s.empty() && arr[s.top()] <= ele) {
//                 s.pop();
//             }

//             int res = (s.empty()) ? -1 : s.top();

//             v.push_back(res);

//             s.push(i);
//         }

//         reverse(v.begin(), v.end());

//         // for (int i = 0; i < v.size(); i++) {
//         //     cout << v[i] << " ";
//         // }

//         int i;
//         for(i=n-2;i>=0;i--){
//             if(arr[i]<arr[i+1]){
//                 swap(arr[i],arr[v[i]]);
//                 break;
//             }
//         }

//         sort(arr+i+1,arr+n);

//         for(auto x:arr){
//             cout<<x;
//         }

//         cout<<endl;

//    }
//  return 0;
// }