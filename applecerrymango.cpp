// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// const int MOD = 1e7;

// unordered_map<string, int> memo;

// int count_arrangements(int a, int c, int m, char last) {

//     if (a == 0 && c == 0 && m == 0) {
//         return 1;
//     }

//     string key = to_string(a) + "_" + to_string(c) + "_" + to_string(m) + "_" + last;

//     if (memo.find(key) != memo.end()) {
//         return memo[key];
//     }

//     int count = 0;

//     if (last != 'a' && a > 0) {
//         count = (count + count_arrangements(a - 1, c, m, 'a')) % MOD;
//     }

//     if (last != 'c' && c > 0) {
//         count = (count + count_arrangements(a, c - 1, m, 'c')) % MOD;
//     }
    
//     if (last != 'm' && m > 0) {
//         count = (count + count_arrangements(a, c, m - 1, 'm')) % MOD;
//     }

//     memo[key] = count;

//     return count;
// }

// int main() {
//     int a, c, m;
//     cin >> a >> c >> m;


//     int result = count_arrangements(a, c, m, ' ')%MOD;

//     cout << result << endl;

//     return 0;
// }





// // #include <iostream>
// // #include <unordered_map>
// // using namespace std;

// // const int MOD = 1e7 + 7;

// // unordered_map<tuple<int, int, int, char>, int> memo;

// // int count_arrangements(int a, int c, int m, char last) {
// //     if (a == 0 && c == 0 && m == 0) {
// //         return 1;
// //     }

// //     auto key = make_tuple(a, c, m, last);

// //     if (memo.find(key) != memo.end()) {
// //         return memo[key];
// //     }

// //     int count = 0;

// //     if (last != 'a' && a > 0) {
// //         count = (count + count_arrangements(a - 1, c, m, 'a')) % MOD;
// //     }

// //     if (last != 'c' && c > 0) {
// //         count = (count + count_arrangements(a, c - 1, m, 'c')) % MOD;
// //     }
    
// //     if (last != 'm' && m > 0) {
// //         count = (count + count_arrangements(a, c, m - 1, 'm')) % MOD;
// //     }

// //     memo[key] = count;

// //     return count;
// // }

// // int main() {
// //     int a, c, m;
// //     cin >> a >> c >> m;

// //     int result = count_arrangements(a, c, m, ' ');

// //     cout << result << endl;

// //     return 0;
// // }


