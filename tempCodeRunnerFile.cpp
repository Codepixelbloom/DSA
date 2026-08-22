#include <iostream>
#include <string> // Required header for std::string and getline

int main() {
    std::string text;

    std::cout << "Enter some text: ";
    // Safely reads an entire line without worrying about array size limits
    std::getline(std::cin, text); 

    std::cout << "You entered: " << text << std::endl;

    return 0;
}
