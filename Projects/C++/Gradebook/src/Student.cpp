#include "../include/Student.h"

/*

Getters and Setters

*/

void Student::setName(std::string name){
    Student::name = name;
}

std::string Student::getName(){
    return Student::name;
}

void Student::setBirthday(std::string birthday){
    Student::birthday = birthday;
}

std::string Student::getBirthday(){
    return Student::birthday;
}

void Student::setSSN(std::string ssn){
    Student::ssn = ssn;
}

std::string Student::getSSN(){
    return Student::ssn;
}

void Student::setSID(int sid){
    Student::studentid = sid;
}

int Student::getSID(){
    return Student::studentid;
}

/*

Initializer

*/

Student::Student(){
    Student::studentid = 1000;
}