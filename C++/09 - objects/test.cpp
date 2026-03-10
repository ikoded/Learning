#include <iostream>
#include <string>

class MyClass {
    public:
        int myNum;
        std::string name;
        int* memaddr;
};

int main(){
    int num = 5;

    MyClass mine;
    mine.myNum = num;
    mine.name = "Alex";
    mine.memaddr = &num; 

    std::cout << mine.myNum << " " << mine.name << " " << mine.memaddr << std::endl;

    // steal mem address of mynum for mine

    MyClass mine2;
    mine2.myNum = 6;
    int* ref = &mine.myNum; // notice different memory address than mine.memaddr because it is a pointer to the memory address of mine.memaddr which stores the memory address of num. 
    // mine.memaddr = memory address of num AND mine2.memaddr = memory address of mine.memaddr (which as this boolean shows, is subsequently storing the memory address of num)
    mine2.memaddr = ref;
    mine2.name = "Alex2";

    std::cout << mine2.myNum << " " << mine2.name << " " << mine2.memaddr << std::endl;
}