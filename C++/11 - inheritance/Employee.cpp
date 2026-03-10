#include <iostream>
#include <string>

class Employee{
    // The reason for protected is because if inherting then you want it to NOT be private.
    // If it was private then only Employee class would have access so getters and setters would need to be in Employee object
    protected:
        int salary = 0;
    public:
        void setSalary(int salary) {this -> salary = salary;}
        int getSalary() { return this -> salary; }
};

class Programmer: public Employee{
    protected:
        int bonus = 0;
    public:
        void setBonus(int bonus) { this -> bonus = bonus; }
        void addBonus() { this->salary += this -> bonus; }
};

class AgileLead{
    public:
        int age;
        void getToWork(){
            std::cout << "Now get to work" << std::endl;
        }
};

//Kind of pointless because setters and getters should just be under employee, but want to show extending inhertiance to multiple
// Both bosses and agilleaders just say to get to work lol :)
class Boss: public Programmer, public AgileLead{  
};

int main(){
    Programmer emp;

    // Set bonus then add it to salary, since just initialized it will be 0 + 1200
    emp.setBonus(1200);
    emp.addBonus();

    std::cout << emp.getSalary() << std::endl;

    //setSalary will overwrite addbonus like how a bonus typically works with promotion
    emp.setSalary(90000);
    // add bonus which is 1200 currently
    emp.addBonus();

    std::cout << emp.getSalary() << std::endl;

    // has the function set in it and age
    AgileLead agl;
    agl.getToWork();
    agl.age = 65;

    // gets agileleads age/function, and all of programmers attributes/functions
    Boss bigman;
    bigman.getToWork();
    bigman.age = 70;
    bigman.setBonus(50000000);
}