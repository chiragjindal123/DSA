#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countServedBuildings(const vector<int>& buildingCount, const vector<int>& routerLocation, const vector<int>& routerRange) {
    int n = buildingCount.size();
    int m = routerLocation.size();
    
    vector<int> coverage(n, 0);
    
    for (int j = 0; j < m; ++j) {
        int location = routerLocation[j] - 1;
        int range = routerRange[j];
        int start = max(0, location - range);
        int end = min(n - 1, location + range);
        
        for (int i = start; i <= end; ++i) {
            coverage[i]++;
        }
    }
    
    int servedBuildings = 0;
    for (int i = 0; i < n; ++i) {
        if (coverage[i] >= buildingCount[i]) {
            servedBuildings++;
        }
    }
    
    return servedBuildings;
}

int main() {
    vector<int> buildingCount = {1, 2, 1, 2, 2};
    vector<int> routerLocation = {3, 1};
    vector<int> routerRange = {3, 2};
    
    int result = countServedBuildings(buildingCount, routerLocation, routerRange);
    cout << "Number of served buildings: " << result << endl;
    
    return 0;
}
