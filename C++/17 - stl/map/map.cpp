#include <iostream>
#include <string>
#include <map>

#define PRINT(var) print(var, #var)

template<typename K, typename V>
void print(std::map<K, V> map, const char* name){
    std::cout << name << ":" << std::endl;
    for(auto obj : map){
        std::cout << obj.first << " " << obj.second << std::endl;
    }
    std::cout << "\n" << std::endl;
}

int main(){
    std::map<std::string, int> students = {{"Matt",28},{"Alex",26}};
    std::map<std::string,std::string> cars = {{"Mazda","Miata"},{"BMW","M3"}};

    PRINT(students);
    PRINT(cars);

    std::cout << students.at("Alex") << std::endl; // prints value

    students["Matt"] = 30; // change value
    students["Larissa"]= 35; // add this way
    students.insert({"Trey",27}); // add key value this way

    //set descending order of keys
    std::map<std::string, int, std::greater<std::string>> example;
}