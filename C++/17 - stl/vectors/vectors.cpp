#include <iostream>
#include <vector>
#include <string>

#define PRINT(var) print (var, #var)

template <typename T>
void print(std::vector<T> vec, const char* name){
    std::cout << name << ":" << std::endl;
    for(T obj : vec){
        std::cout << obj << " ";
    }
    std::cout << "\n" << std::endl;
}

int main(){
    std::vector<std::string> cars = {"Mazda", "Ferrari", "BMW"}; // index 0 1 2
    PRINT(cars);

    //Vectors have useful functions such as front, back, at
    std::cout << "Front: " << cars.front() << "\n" << "Back: " << cars.back() << "\n" << "Index 1(0 indexed): " << cars.at(1) << "\n" << std::endl;

    // Can also push back and pop back
    cars.push_back("Hyundai");
    PRINT(cars);
    cars.pop_back();
    PRINT(cars);

    // Can change index values with .at
    cars.at(1) = "Lamborghini";
    PRINT(cars);

    // Same with front
    cars.front() = "Mercedes";
    PRINT(cars);
}