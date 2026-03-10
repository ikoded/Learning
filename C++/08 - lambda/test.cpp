#include <iostream>

// Lambda Syntax: [capture] (parameters) { code };

int main() {
    auto message = []() {
        std::cout << "Hello World!" << std::endl;
    };

    message();

    // pass in parameters
    int a = 5, x = 5;
    auto print = [](int a, int x){
        std::cout << "a: " << a << " " << "x: " << x << std::endl;
    };

    // works like capture because I am passing a, x in. Could just pass numbers not variables. a and x in the lambda is LOCAL to the lambda
    print(a, x);

    //capture

    auto sum =  [a,x]() {
        return a + x;
    };

    int number = sum();

    std::cout << "sum: " << number << std::endl;
    return 0;
}