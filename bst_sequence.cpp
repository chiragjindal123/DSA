#include <iostream>
#include <vector>

using namespace std;

int countTrees(int n) {
    vector<int> BT(n + 1, 0);
    BT[0] = BT[1] = 1;
    BT[2] = 2;

    for (int i = 3; i <= n; ++i)
        for (int j = 0; j < i; j++)
            BT[i] += BT[j] * BT[i - j - 1];

    return BT[n];
}

int main() {
    int n = 5;
    cout << "Total Possible Binary Trees are: " << countTrees(n) << endl;
    return 0;
}
