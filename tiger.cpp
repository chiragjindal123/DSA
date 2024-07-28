#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int lion = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'T') lion++;
    }

    int goat = n - lion;
    int mn = INT_MAX;

    int i = 0, j = 0, l = 0;
    while (j < lion) {
        if (str[j] == 'T') l++;
        j++;
    }
    mn = min(mn, lion - l);
    while (j < n) {
        if (str[i] == 'T') l--;
        if (str[j] == 'T') l++;
        mn = min(mn, lion - l);
        i++;
        j++;
    }

    i = 0, j = 0, l = 0;
    while (j < goat) {
        if (str[j] == 'H') l++;
        j++;
    }
    mn = min(mn, goat - l);
    while (j < n) {
        if (str[i] == 'H') l--;
        if (str[j] == 'H') l++;
        mn = min(mn, goat - l);
        i++;
        j++;
    }

    cout << mn << endl;
    return 0;
}
