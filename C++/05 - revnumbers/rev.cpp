#include <iostream>

int main() {
    int number = 123456;
    int reverse = 0;

    while(number){
        reverse = reverse * 10 + number % 10;
        number/=10;
    }

    std::cout << reverse;
    return 0;
}