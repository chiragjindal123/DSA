#include<iostream>
using namespace std;

int main() {
    int n = 121;
    int temp = n;
    int ans = 0;
    
    while (n != 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    
    if (temp == ans) {
        cout << "Yes, it is a palindrome number." << endl;
    } else {
        cout << "No, it is not a palindrome number." << endl;
    }
    
    return 0;
}
