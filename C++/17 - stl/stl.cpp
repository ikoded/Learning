#include <iostream>
#include <string>
// STL Imports
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <map>

int main(int argc, char* argv[]){
    std::vector<std::string> cars = {"Mazda","Ferrari"};

    for (std::string car : cars){
        std::cout << car << std::endl;
    }

    // just wanted to do this for fun
    std::cout << "Number of args: " << argc << std::endl;

    for (int i=0; i < argc; i++){
        std::cout << "- " << argv[i] << std::endl;
    }
}