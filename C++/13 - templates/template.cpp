#include <iostream>
#include <string>

template<typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    std::cout << add<int>(5,5) << std::endl;
    std::cout << add<std::string>("Hello ", "world") << std::endl;
    std::cout << add<double>(5.0,5.0) << std::endl;
}