#include <iostream>
#include <string>
#include <list>

#define PRINT(var) print(var, #var)

void print(std::list<std::string> list, const char* name){
    std::cout << name << ":" << std::endl;
    for(std::string obj : list){
        std::cout << obj << " ";
    }
    std::cout << "\n" << std::endl;
}

int main (){
    std::list<std::string> cars = {"Mazda","Ferarri","Mercedes"};

    // list are similar to vectors
    cars.push_front("Mistbushi");
    cars.push_back("Mclaren");
    PRINT(cars);
    cars.pop_back();
    cars.pop_front();

    cars.front() = "Toyota";
    cars.back() = "Hyundai";

    PRINT(cars);

    std::list<std::string> frontBackTest = {"SingleVariable"};
    std::list<std::string> list;

    frontBackTest.front() = "Front";
    frontBackTest.back() = "Back";

    std::cout << frontBackTest.size() << std::endl;
    std::cout << frontBackTest.empty() << std::endl; //0 because not empty
    std::cout << list.empty() << std::endl; //1 because empty

    PRINT(frontBackTest);
}