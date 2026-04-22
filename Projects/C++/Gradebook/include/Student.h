#pragma once
#include <string>

class Student {
    public:
        // getter and setters
        void setName(std::string name);
        std::string getName();
        void setBirthday(std::string birthday);
        std::string getBirthday();
        void setSSN(std::string ssn);
        std::string getSSN();
        void setSID(int sid);
        int getSID();
        // initializer
        Student();
    private:
        // private object members
        std::string name;
        std::string birthday;
        std::string ssn;
        int studentid;
};