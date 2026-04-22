#pragma once
#include <vector>

class Gradebook{
    public:
        // getter and setters
        void setSID(int sid);
        int getSID();
        void setGrades(std::vector<double> grades);
        std::vector<double> getGrades();
        // functionalities
        double returnAverage();
        void clearGrades();
    private:
        // private object members
        int studentid;
        std::vector<double> grades;
};