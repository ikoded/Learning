#include <iostream>
#include <string>

class Animal {
    public:
        void AnimalSound(){
            std::cout << "This is an Animal Sound" << std::endl;
        }
};

class Pig: public Animal {
    public:
        void AnimalSound(){
            std::cout << "Oink" << std::endl;
        }
};

int main(){
    Animal base;
    Pig pig;

    // overloading does work if you decided to add a parameter in Pig class for AnimalSound
    // even though it is inherited Pig overwrites the AnimalSound
    base.AnimalSound();
    pig.AnimalSound();
}