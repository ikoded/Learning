#include <iostream>
#include <string>

class Vehicle{
    public:
        std::string brand = "Mazda";
        void honk(){
            std::cout << "Honk" << std::endl;
        }
};

class Car: public Vehicle{
    public:
        std::string model = "3";
};

int main(){
    Vehicle base;
    base.honk();

    Car myCar;
    // Car inherits vehicle method honk
    myCar.honk();
    // Vehicle does not have attribute model
    std::cout << "Vehicle: " << base.brand << " " << std::endl;
    // Car has both brand and model
    std::cout << "Car: " << myCar.brand << " " << myCar.model << " " << std::endl;
}