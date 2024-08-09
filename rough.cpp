#include <iostream>
#include <string>

int main() {
    std::string str = "abcd";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    std::cout << str << std::endl; // Output should be "ABCD"
    return 0;
}
