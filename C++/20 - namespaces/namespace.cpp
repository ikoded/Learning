#include <iostream>
#include <string>

namespace MySpace {
    int x = 42;
    std::string name = "Beck";
}

// could use: "using namespace std;"

int main(){
    int x = 25;
    std::string name = "John";

    std::cout << "Variables in this MyNameSpace:" << std::endl;
    std::cout << MySpace::name << " " << MySpace::x << std::endl;

    std::cout << "Variables in this local main function:" << std::endl;
    std::cout << name << " " << x;
}