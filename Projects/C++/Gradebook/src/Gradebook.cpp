#include "../include/Gradebook.h"

/*

Getters and Setters

*/

void Gradebook::setSID(int sid){
    Gradebook::studentid = sid;
}

int Gradebook::getSID(){
    return Gradebook::studentid;
}

void Gradebook::setGrades(std::vector<double> grades){
    Gradebook::grades = grades;
}

std::vector<double> Gradebook::getGrades(){
    return Gradebook::grades;
}

/*

Functions

*/

double Gradebook::returnAverage(){
    double sum = 0.0;
    for(double grade : Gradebook::grades){
        sum += grade;
    }

    return (sum/Gradebook::grades.size());
}

void Gradebook::clearGrades(){
    Gradebook::grades.clear();
}