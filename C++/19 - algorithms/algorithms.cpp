#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

#define PRINT(var) print(var, #var)

template <typename Container>
void print(const Container& data, const char* name){
    std::cout << name << ":" << std::endl;
    for(auto it = data.begin(); it != data.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << "\n" << std::endl;
}

int main(){
    std::vector<std::string> people = {"Garrett","Matt","Alex"};
    PRINT(people);
    return 0;
}