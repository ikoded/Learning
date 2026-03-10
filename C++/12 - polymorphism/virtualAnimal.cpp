#include <iostream>
#include <string>

class Animal{
    public:
        int age;
        virtual void sound(){}
};

class Dog: public Animal{
    public:
        std::string breed;
        void sound() override{
            std::cout << "Woof Woof" << std::endl;
        }
};

int main(){
    Animal* a;
    Dog dog;

    dog.age = 10;
    dog.breed = "Maltese";
    dog.sound();

    a = &dog;

    // a is a reference to dog now so it is basically an alias to memory location of dog
    // if Animal did not define age or sound then Animal* a would not have access to variable, for example a can not call on breed to see what it is
    std::cout << a->age << std::endl;
    a->age = 12;
    std::cout << a->age << " " << dog.age << std::endl;

    // Same way of calling, dereferenced pointer
    (*a).sound();
    a->sound();

}