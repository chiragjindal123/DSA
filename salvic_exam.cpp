#include <iostream>
#include <string>

using namespace std;

string solve(string s, string t) {
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (j < t.length() && (s[i] == t[j] || s[i] == '?')) {
            if (s[i] == '?') s[i] = t[j];
            j++;
        } else if (s[i] == '?') {
            s[i] = 'a';
        }
    }
    return (j == t.length()) ? "YES\n" + s : "NO";
}

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        string s, t;
        cin >> s >> t;
        cout << solve(s, t) << endl;
    }
    
    return 0;
}