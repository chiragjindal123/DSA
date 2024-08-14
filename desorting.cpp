// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int T;
//     cin >> T;

//     while (T--) {
//         int n;
//         cin >> n;
//         vector<int> nums(n);
//         int diff = INT_MAX;  // Use INT_MAX for clarity
//         bool sorted = true;

//         for (int i = 0; i < n; i++) {
//             cin >> nums[i];
//             if (i > 0) {
//                 diff = min(nums[i] - nums[i - 1], diff);
//                 sorted &= nums[i] >= nums[i - 1];
//             }
//         }

//         if (!sorted) {
//             cout << 0 << endl;
//             continue;
//         }

//         cout << diff / 2 + 1 << endl;
//     }

//     return 0;
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;

    string str = "";

for (char ch = '1'; ch <= n+'0'; ch++) {
    str += ch;
}

for (auto ch : str) {
    cout << ch << endl;
}

 return 0;
}