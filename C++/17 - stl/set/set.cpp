#include <iostream>
#include <string>
#include <set>

#define PRINT(var) print(var ,#var)

template<typename T>
void print(std::set<T> set, const char* name){
    std::cout << name << ":" << std::endl;
    for(T obj : set){
        std::cout << obj << " ";
    }
    std::cout << "\n"  << std::endl;
}

int main(){
    std::set<std::string> cars = {"Mazda","Mercedes","BMW", "Lambroghini"}; //sorts it
    PRINT(cars);

    std::set<int, std::greater<int>> nums = {1,5,8,2,3}; //sorted reverse order
    // notice how cannot use PRINT template, because it is expecting a comparator of std::less order
    /*
    Could fix by making print template:

    template<typename T, typename Cmp = std::less<T>>
    void print(std::set<T, Cmp> set, const char* name){
    ...
    
    */
    for(int num : nums){
        std::cout << num << " ";
    }
}