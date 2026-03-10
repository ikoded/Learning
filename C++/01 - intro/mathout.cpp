#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){
    int x = (argc > 0) ? std::atoi(argv[1]) : 5;
    int y = (argc > 1) ? std::atoi(argv[2]) : 5;

    std::cout << x << " + " << y << " = " << (x+y) << std::endl;
    return 0;
}