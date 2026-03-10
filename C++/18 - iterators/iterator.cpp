#include <iostream>
#include <vector>
#include <string>

#define PRINT(var, begin, end) print(var, #var, begin, end)
#define REVERSEPRINT(var, begin, end) reverseprint(var, #var, begin, end)

/*

First input is the vector
Second input is variable name which per the define above is auto passed
Third input is how many indices to skip from beginning
Fourth input is how many indices to skip from end

*/
template<typename T>
void print(std::vector<T> vec, const char* name, int begin, int end){
    typename std::vector<T>::iterator it;
    std::cout << name << ", " << begin << ", " << end << ":" << std::endl;
    for(it = vec.begin() + begin; it != vec.end() - end; ++it){
        std::cout << *it << " ";
    }
    std::cout << "\n" << std::endl;
}


/*
(REVERSED ORDER OF VECTOR)

First input is the vector
Second input is variable name which per the define above is auto passed
Third input is how many indices to skip from beginning
Fourth input is how many indices to skip from end

*/
template<typename T>
void reverseprint(std::vector<T> vec, const char* name, int begin, int end){
    typename std::vector<T>::iterator it;
    std::cout << "(REVERSED ORDER)" << name << ", " << begin << ", " << end << ":" << std::endl;
    for(auto it = vec.rbegin() + begin; it != vec.rend() - end; ++it){
        std::cout << *it << " ";
    }
    std::cout << "\n" << std::endl;
}

int main(){
    std::vector<std::string> cars = {"Mazda", "Ferarri", "Mercedes"};
    PRINT(cars, 0, 0); // skips nothing
    PRINT(cars, 1, 0); // skips first index so Mazda
    PRINT(cars, 2, 0); // skips first & second index so Mazda & Ferarri
    REVERSEPRINT(cars, 0, 0); // reversed print skips nothing
    REVERSEPRINT(cars, 1, 0); // reversed print skips first index so Mercedes
    REVERSEPRINT(cars, 2, 0); // reversed print skips first & second index so Mercedes & Ferrari

    // Now skip last indices
    PRINT(cars, 0, 0); // skips nothing
    PRINT(cars, 0, 1); // skips last value so Mercedes
    PRINT(cars, 0, 2); // skips last 2 values so Mercedes and Ferarri
    REVERSEPRINT(cars, 0, 0); // skips nothing
    REVERSEPRINT(cars, 0, 1); // skips last in reversed order so Mazda
    REVERSEPRINT(cars, 0, 2); // skips last 2 in reversed order so Mazda and Ferarri 
}