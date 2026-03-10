#include <iostream>
#include <string>

int main() {
    std::string first;
    do{
        std::cout << "Please enter your first name (must not be empty): ";
        std::getline(std::cin, first);
    } while (first.empty());
    std::string last;
    do{
        std::cout << "Please enter your last name (must not be empty): ";
        std::getline(std::cin, last);
    } while (last.empty());

    std::cout << "First & Last name: " << first << " "  << last << std::endl;


    return 0;
}