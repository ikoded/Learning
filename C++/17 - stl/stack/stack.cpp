#include <iostream>
#include <stack>
#include <string>

#define PRINT(var) print(var, #var)

template<typename T>
std::stack<T> print(std::stack<T> stack, const char* name){
    std::stack<T> tempstack;
    std::stack<T> realorder;
    std::cout << name << ":" << std::endl;
    while(!stack.empty()){
        std::cout << stack.top() << " ";
        tempstack.push(stack.top());
        stack.pop();
    }

    //temp is reverse order right now, loop once more
    while(!tempstack.empty()){
        realorder.push(tempstack.top());
        tempstack.pop();
    }
    std::cout << "\n" << std::endl;

    return realorder;
}

int main(){
    std::stack<std::string> cars;
    cars.push("Mazda"); cars.push("BMW"); cars.push("Mercedes"); cars.push("Ferrari");
    // Ferrari -> Mercedes -> BMW -> Mazda FILO
    cars=PRINT(cars);
    // Want to show it stays original order using dual stack in print method
    cars=PRINT(cars);

    // IMPORTANT! This dual stack method to preserve order is ultimately pointless because the stack is already copied when passed by
    // PRINT(CARS) would keep cars locally the same without even returning
    // the original stack is local and therefore does not get altered, I just wanted to have fun :)
}