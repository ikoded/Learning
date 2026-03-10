#include <iostream>

int main() {
    int a = 10;

    int& refA = a;
    refA = 30;

    std::cout << "References example:" << std::endl;
    std::cout << "a = " << a << "(" << &a << ")" << " refA = " << refA << "(" << &refA << ")" << std::endl; // both 30, making refA `&refA` prints the memory location of what refA is referencing because references are aLiases and do NOT have their own memory location

    int* ptrA = &a;
    int* ptrB = nullptr; // Showing pointer can start as nullptr

    std::cout << "Pointers example:" << std::endl;
    std::cout << "a = " << a << "(" << &a << ")" << " ptrA = " << *ptrA << "(" << &ptrA << ")" << std::endl; // both 30 but memory location of pointer A is different since it has its own

    *ptrA = 40;

    std::cout << "Changing A with Pointer:" << std::endl;
    std::cout << "a = " << a << "(" << &a << ")" << " ptrA = " << *ptrA << "(" << &ptrA << ")" << " refA = " << refA << "(" << &refA << ")" << std::endl; // a (and refA) has same memory location even with change, pointer changes a to 40

    return 0;
}