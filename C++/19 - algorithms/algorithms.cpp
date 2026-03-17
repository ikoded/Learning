#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

#define PRINT(var) print(var, #var)

template <typename Container>
void print(const Container& data, const char* name){
    std::cout << name << ":" << std::endl;
    for(auto it = data.begin(); it != data.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << "\n" << std::endl;
}

int main(){
    std::vector<std::string> people = {"Garrett","Matt","Alex", "Gary"};
    PRINT(people);

    std::cout << "Sorted vector:" << std::endl;
    std::sort(people.begin(),people.end());
    PRINT(people);

    std::cout << "Sorted reverse vector:" << std::endl;
    std::sort(people.rbegin(),people.rend());
    PRINT(people);

    // can also skip end by -1, however both these don't actually omit just skips from sorting
    std::cout << "Sorted with first element skipped:" << std::endl;
    std::sort(people.begin()+1,people.end());
    PRINT(people);

    std::set<int> caryear = {2000,1999,2}; // auto sorts
    PRINT(caryear);

    auto it = std::find(caryear.begin(),caryear.end(),2);
    std::cout << "Find number 2 in caryear: " << *it << std::endl;

    auto it2 = std::upper_bound(caryear.begin(), caryear.end(),2);
    std::cout << "Find first number greater than 2: " << *it2 << std::endl;

    auto it3 = std::min_element(caryear.begin(),caryear.end());
    std::cout << "Find min element: " << *it3 << std::endl;

    std::vector<int> copiedNumbers(3);
    std::copy(caryear.begin(), caryear.end(),copiedNumbers.begin());
    PRINT(copiedNumbers);

    std::vector<int> filled(6);
    std::fill(filled.begin(),filled.end(),20);
    PRINT(filled);
    return 0;
}