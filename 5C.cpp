#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> lengths(n, 0);
    stack<int> st;
    int maxLength = 0;
    int count = 0;

    for(int i = 0; i < n; ++i) {
        if(s[i] == '(') {
            st.push(i);
        } else {
            if(!st.empty()) {
                int matchedIndex = st.top();
                st.pop();
                int length = i - matchedIndex + 1;
                if(matchedIndex > 0) {
                    length += lengths[matchedIndex - 1];
                }
                lengths[i] = length;
                if(length > maxLength) {
                    maxLength = length;
                    count = 1;
                } else if(length == maxLength) {
                    count++;
                }
            }
        }
    }
    
    if(maxLength == 0) {
        cout << "0 1" << endl;
    } else {
        cout << maxLength << " " << count << endl;
    }

    return 0;
}
