#include <iostream>
#include <string>
#include <deque>

int main(){
    std::deque<std::string> cars = {"Mazda", "Ferrari"};

    for (std::string car : cars){
        std::cout << car << std::endl;
    }

    cars.push_front("Mercedes");
    cars.push_back("Honda");
    // pop_back and pop_front also works
    // .front() and .back() works

    std::cout << cars[0];
}