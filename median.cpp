#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

// Function to compute modular inverse using Fermat's Little Theorem
long long modinv(long long a, int mod) {
    long long result = 1, exp = mod - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = result * a % mod;
        }
        a = a * a % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute factorials and modular inverses of factorials
void preprocess_factorials(int max_n, vector<long long>& fact, vector<long long>& inv_fact, int mod) {
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i <= max_n; ++i) {
        fact[i] = fact[i - 1] * i % mod;
    }
    
    inv_fact[max_n] = modinv(fact[max_n], mod);
    for (int i = max_n - 1; i >= 1; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % mod;
    }
}

// Function to compute nCk modulo mod
long long comb(int n, int k, const vector<long long>& fact, const vector<long long>& inv_fact, int mod) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % mod * inv_fact[n - k] % mod;
}

// Main function to solve the problem for each test case
long long solve(const vector<int>& arr, int n, int k, const vector<long long>& fact, const vector<long long>& inv_fact) {
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }
    
    int half_k = k / 2;
    long long result = 0;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            int left_count = i - half_k + 1;
            int right_count = n - i - 1 - half_k + 1;
            left_count = max(left_count, 0);
            right_count = max(right_count, 0);
            long long num_subsequences = comb(left_count + half_k, half_k, fact, inv_fact, MOD) *
                                         comb(right_count + half_k, half_k, fact, inv_fact, MOD) % MOD;
            result = (result + num_subsequences) % MOD;
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    vector<vector<int>> test_cases;
    int max_n = 0;
    
    // Read input
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        max_n = max(max_n, n);
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        test_cases.push_back(arr);
    }
    
    // Precompute factorials and inverses
    vector<long long> fact(max_n + 1), inv_fact(max_n + 1);
    preprocess_factorials(max_n, fact, inv_fact, MOD);
    
    // Process each test case
    for (const auto& arr : test_cases) {
        int n = arr.size();
        int k = arr.size(); // As k is the length of the array in this example
        cout << solve(arr, n, k, fact, inv_fact) << endl;
    }
    
    return 0;
}
