#include <iostream>
#include <string>

class Car{
    private:
        std::string model;
        std::string brand;
        int year;
    public:
        Car(std::string model, std::string brand, int year){
            this -> model = model;
            this -> brand = brand;
            this -> year = year;
        }
        Car(int year){
            this -> year = year;
        }
        Car(){
            // empty constructor
        }

        // setter methods
        void setModel(std::string model) { this -> model = model; }
        void setBrand(std::string brand) { this -> brand = brand; }
        void setYear(int year) { this -> year = year; }

        // getter methods
        std::string getModel() const { return this -> model; }
        std::string getBrand() const { return this -> brand; }
        int getYear() const { return this -> year; }

        void displayAll(){
            // dynamic if conditions embedded into print to capture in case empty fields like initializing using int year overloaded Car object initialization
            std::cout << (getBrand().empty() ? "" : getBrand() + " ") << (getModel().empty() ? "" : getModel() + " ") << (getYear() ? getYear() : 0) << std::endl;
        }
};

int main (){
    Car myCar("3", "Mazda", 2025);
    // Can use getter methods or use displayAll which prints using getters
    std::string model = myCar.getModel();
    std::string brand = myCar.getBrand();
    int year = myCar.getYear();

    // These are the same, just to show what I mean. A displayAll() is nice for debugging purposes and to prevent redundant prints
    std::cout << brand << " " << model << " " << year << std::endl;
    myCar.displayAll();

    // Can use setter to change first initialization
    myCar.setModel("Tycan");
    myCar.setBrand("Porsche");
    myCar.setYear(2026);

    //Print new variables
    myCar.displayAll();

    Car myOtherCar(2025);
    myOtherCar.displayAll();

    //Empty initialization to show it prints nothing
    Car emptyCar;
    emptyCar.displayAll();

}