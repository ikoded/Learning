#include <iostream>
#include <string>

class Car{
    public:
        std::string model;
        std::string brand;
        int year;

        Car(std::string model, std::string brand, int year){
            this -> model = model;
            this -> brand = brand;
            this -> year = year;
        };

        Car(int year){
            this -> year = year;
        }

        void display(){
            std::cout << (this -> brand.empty() ? "" : this -> brand + " ") << (this -> model.empty() ? "" : this -> model + " ") << this -> year << std::endl;
        }
};

int main(){
    Car myCar(2025);

    myCar.display();

    Car myOtherCar("3", "Mazda", 2025);

    myOtherCar.display();

    return 0;
}