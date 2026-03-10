#include <iostream>

void swapNums(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// This also works with strings
int main(){
    int num1 = 2;
    int num2 = 3;

    std::cout << "Before Swap: " << num1 << " " << num2 << std::endl;

    swapNums(num1, num2);

    std::cout << "After Swap: " << num1 << " " << num2 << std::endl;

    return 0;
}