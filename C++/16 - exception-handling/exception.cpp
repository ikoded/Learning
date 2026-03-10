#include <iostream>

int main(){
    try{
        int age = 15;
        if (age >= 18){
            std::cout << "Access Granted" << std::endl;
        }else{
            throw(age);
            // can also throw(505) or any other number we want if we want to define custom error codes for this
            // helpful for internal debugging and org prod apps/games
        }
    // if set as catch (...) will catch any exception, you cannot use the code thrown this way but allws for general error messages
    } catch (int age){
        std::cout << "Access denied, must be 18 yo or older.\nAge is: " << age << std::endl;
    }

}