#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int calculateMaxProfit(vector<int>& category, vector<int>& price) {
    int n = category.size();
    int maxProfit = 0;
    unordered_set<int> soldCategories;

    for (int i = 0; i < n; i++) {
        int currentProfit = price[i] * (soldCategories.size() + 1);
        maxProfit += currentProfit;
        soldCategories.insert(category[i]);
    }

    return maxProfit;
}

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> category(n);
    vector<int> price(n);

    cout << "Enter the categories of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> category[i];
    }

    cout << "Enter the prices of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int maxProfit = calculateMaxProfit(category, price);
    cout << "Maximum possible total profit: " << maxProfit << endl;

    return 0;
}