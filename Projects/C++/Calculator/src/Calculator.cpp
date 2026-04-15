#include "../include/Calculator.h"
#include <vector>
#include <iostream>

std::vector<int> Calculator::queueNumbers(){
    std::vector<int> nums;
    if(Calculator::memory.empty()){
        return nums;
    }else{
        if(Calculator::memory.size() > 1){
            // This takes the memory at front and then erases it. Since this queue goes in order from left to right, we need to grab from front for the next 2 numbers in queue
            nums.push_back(Calculator::memory.front());
            Calculator::memory.erase(Calculator::memory.begin());

            nums.push_back(Calculator::memory.front());
            Calculator::memory.erase(Calculator::memory.begin());
        }else{
            Calculator::memory.clear();
        }

        return nums;
    }
}

std::vector<int> Calculator::getMemory(){
    return Calculator::memory;
}

void Calculator::setMemory(std::vector<int> copyMemory){
    for(int num : copyMemory){
        Calculator::memory.push_back(num);
    }
}

Calculator::Calculator(){} // Initialization