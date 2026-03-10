#include <iostream>

class MyClass{
    public:
        MyClass(){
            std::cout << "This is a class" << std::endl;
        }
};

int main(){
    MyClass yes;
    return 0;
}