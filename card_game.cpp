#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int winCount = 0;
        
        // Case 1: Suneet flips a1 and a2, Slavic flips b1 and b2
        int suneet_wins = 0, slavic_wins = 0;
        if (a1 > b1) suneet_wins++;
        else if (a1 < b1) slavic_wins++;
        
        if (a2 > b2) suneet_wins++;
        else if (a2 < b2) slavic_wins++;
        
        if (suneet_wins > slavic_wins) winCount++;
        
        // Case 2: Suneet flips a1 and a2, Slavic flips b2 and b1
        suneet_wins = 0; slavic_wins = 0;
        if (a1 > b2) suneet_wins++;
        else if (a1 < b2) slavic_wins++;
        
        if (a2 > b1) suneet_wins++;
        else if (a2 < b1) slavic_wins++;
        
        if (suneet_wins > slavic_wins) winCount++;
        
        // Case 3: Suneet flips a2 and a1, Slavic flips b1 and b2
        suneet_wins = 0; slavic_wins = 0;
        if (a2 > b1) suneet_wins++;
        else if (a2 < b1) slavic_wins++;
        
        if (a1 > b2) suneet_wins++;
        else if (a1 < b2) slavic_wins++;
        
        if (suneet_wins > slavic_wins) winCount++;
        
        // Case 4: Suneet flips a2 and a1, Slavic flips b2 and b1
        suneet_wins = 0; slavic_wins = 0;
        if (a2 > b2) suneet_wins++;
        else if (a2 < b2) slavic_wins++;
        
        if (a1 > b1) suneet_wins++;
        else if (a1 < b1) slavic_wins++;
        
        if (suneet_wins > slavic_wins) winCount++;
        
        cout << winCount << endl;
    }
    
    return 0;
}
