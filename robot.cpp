#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;
    cout << "Are You a Robot, Again? (yes/no): ";
    cin >> answer;

    cout << (answer == "No" ? "Yes, I am a robot." : "No, I'm not a robot.") << endl;

    return 0;
}
