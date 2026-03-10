#include <iostream>
#include <string>
#include <queue>

#define PRINT(var) print(var, #var)

template<typename T>
std::queue<T> print(std::queue<T> queue, const char* name){
    std::queue<T> tempqueue;
    std::cout << name << ":" << std::endl;
    while(!queue.empty()){
        std::cout << queue.front() << std::endl;
        tempqueue.push(queue.front());
        queue.pop();
    }
    std::cout << "\n" << std::endl;
    return tempqueue;
}

int main(){
    std::queue<std::string> students; // cannot declare like stacks
    std::queue<int> ages; // cannot declare like stacks

    students.push("Matt");
    students.push("Alex");

    ages.push(26);
    ages.push(28);

    students=PRINT(students);
    ages=PRINT(ages);

    //Checking queue stayed same
    std::cout << "Queue size: " << students.size() << std::endl;
    std::cout << "First: " << students.front() << std::endl;
    std::cout << "Last: " << students.back() << std::endl;

    std::cout << "Queue size: " << ages.size() << std::endl;
    std::cout << "First: " << ages.front() << std::endl;
    std::cout << "Last: " << ages.back() << std::endl;
}