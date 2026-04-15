#pragma once
#include <vector>

class Calculator {
    public:
        std::vector<int> queueNumbers();
        std::vector<int> getMemory();
        void setMemory(std::vector<int> copyMemory);
        Calculator();
    private:
        std::vector<int> memory;
};