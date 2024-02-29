// #include <iostream>
// using namespace std;
// int max(int x, int y) {
//    return (x > y) ? x : y;
// }
// int knapSack(int W, int w[], int v[], int n) {
//    int i, wt;
//    int K[n + 1][W + 1];
//    for (i = 0; i <= n; i++) {
//       for (wt = 0; wt <= W; wt++) {
//          if (i == 0 || wt == 0)
//          K[i][wt] = 0;
//          else if (w[i - 1] <= wt)
//             K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
//          else
//         K[i][wt] = K[i - 1][wt];
//       }
//    }
//    return K[n][W];
// }
// int main() {
//    cout << "Enter the number of items in a Knapsack:";
//    int n, W;
//    cin >> n;
//    int v[n], w[n];
//    for (int i = 0; i < n; i++) {
//       cout << "Enter value and weight for item " << i << ":";
//       cin >> v[i];
//       cin >> w[i];
//    }
//    cout << "Enter the capacity of knapsack";
//    cin >> W;
//    cout << knapSack(W, w, v, n);
//    return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// //creating a global matrix
// int arr[2000][2000];

// // function to check whether subset with given sum is present or not
// int subsetSum(int a[], int n, int sum)
// {
// 	if (sum == 0)
// 		return 1;     //subset with given sum is present
		
// 	if (n <= 0)
// 		return 0;     //subset with given sum is abset

// 	if (arr[n - 1][sum] != -1)
// 		return arr[n - 1][sum];
	
// 	//if call of a[n-1] is greater than sum then return the following value
// 	if (a[n - 1] > sum)
// 		return arr[n - 1][sum] = subsetSum(a, n - 1, sum);
// 	else
// 	{
// 		// 2 calls are initiated here since we do not know which condition could be true.
// 		return arr[n - 1][sum] = subsetSum(a, n - 1, sum) || subsetSum(a, n - 1, sum - a[n - 1]);
// 	}
// }

// int main()
// {
// 	//initializing the matrix with -1 or any other negative value.
// 	memset(arr, -1, sizeof(arr));
// 	int n = 5;
// 	int a[] = {1, 5, 3, 7, 4};
// 	int sum = 12;

// 	if (subsetSum(a, n, sum))
// 	{
// 		cout << "YES" << endl;
// 	}
// 	else
// 		cout << "NO" << endl;
// }




#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum) {
 bool subset[n + 1][sum + 1];
 for (int i = 0; i <= n; i++)
 subset[i][0] = true;
 for (int i = 1; i <= sum; i++)
 subset[0][i] = false;
 for (int i = 1; i <= n; i++) {
 for (int j = 1; j <= sum; j++) {
 if (j < set[i - 1])
 subset[i][j] = subset[i - 1][j];
 if (j >= set[i - 1])
 subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
 }
 }
 return subset[n][sum];
}
int main() {
 int set[] = { 3, 34, 4, 12, 5, 2 };
 int sum = 9;
 int n = sizeof(set) / sizeof(set[0]);
 if (isSubsetSum(set, n, sum) == true)
 cout<<("Found a subset with the given sum.\n");
 else
 cout<<("No subset with the given sum.\n");

 return 0;

}
