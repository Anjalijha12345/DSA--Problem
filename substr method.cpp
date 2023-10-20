#include <iostream>
#include <string>

int main() {
    std::string fullString = "This is a sample string.";
    
    // Extract a substring starting from index 5 and including the next 7 characters
    std::string subString = fullString.substr(5, 7);

    std::cout << "Original String: " << fullString << std::endl;
    std::cout << "Substring: " << subString << std::endl;

    return 0;
}
