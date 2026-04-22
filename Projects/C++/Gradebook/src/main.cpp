#include "../include/Gradebook.h"
#include "../include/Student.h"
#include <iostream>

using namespace std;

static vector<Student> students;
static vector<Gradebook> gradebook;

/*

Clear CIN for clean input parsing

*/

void clearCIN(){
    cin.clear();
    cin.ignore(10000,'\n');
}

/*

Main Menu and Choice Processing

*/

void printWelcome(){
    cout << "--------------------------------" << endl;
    cout << "   Welcome to the Gradebook" << endl;
    cout << "--------------------------------" << endl;

    cout << "Choices for gradebook:\n1.Add student\n2.Remove student\n3.Modify student\n4.List students\n5.Add grades\n6.Clear grades\n7.Calculations" << endl;
}

char processChoice(){
    char choice;

    cout << "Please enter a choice(x to exit): ";
    cin >> choice;

    clearCIN();
    return choice;
}

/*

Finding Student and Grades

*/

Student findStudent(int sid){
    Student student;
    student.setSID(0); // we know our randomizer wont let sid be 0 so this means it was not found if returned at end
    for(Student student : students){
        if(student.getSID() == sid){
            return student;
        }
    }

    return student; // add as fallback if not found, the returned objects getSID() will be zero which is never the case for real student objects (randomizer ensures 1-250 never zero inclusive)
}

Gradebook findGrades(int sid){
    Gradebook grade;
    grade.setSID(0); // we know our randomizer wont let sid be 0 so this means it was not found if returned at end
    for(Gradebook grade : gradebook){
        if(grade.getSID() == sid){
            return grade;
        }
    }

    return grade; // add as fallback if not found, the returned objects getSID() will be zero which is never the case for real student objects (randomizer ensures 1-250 never zero inclusive)
}

/*

Generate unique SID

*/

int randomID(){
    return (rand() % 250) + 1; // 1 - 250 inclusive (THIS IS IMPORTANT, IT SHOULD NEVER BE ZERO SINCE FIND STUDENT/GRADE USES ZERO AS "Not Found")
}

int ensureUniqueSID(){
    int randomsid = randomID();

    while(true){
        if(findStudent(randomsid).getSID() == 0){ // we set return of sid to 0 if not found, and the randomizer only allows 1-250 so we know it can't be a real student object
            break;
        }

        randomsid = randomID();
    }

    return randomsid;
}

/*

Add student

*/

/*

Remove student

*/

/*

Modify student

*/

/*

List students

*/

void listStudents(){
    cout << "Students:\n" << endl;
    if(students.size() == 0){
        cout << "No students in database" << endl;
    }else{
        for(Student student : students){
            string name = student.getName();
            string birthday = student.getBirthday();
            string ssn = student.getSSN();
            int sid = student.getSID();
            cout << "--------------------------------" << endl;
            cout << "Student ID: " << sid << endl;
            cout << "Name: " << name << endl;
            cout << "Birthday: " << birthday << endl;
            cout << "SSN: " << ssn << endl;
            cout << "Grades: ";
            for(double grade : findGrades(sid).getGrades()){
                cout << grade << ", ";
            }
            cout << endl;
            cout << "--------------------------------" << endl;
        }
    }

    cout << "\n" << endl;
}

int main(){
    srand(time(0)); // set randomizer seed to runtime start (could be better, this one throws the same random num if ran in quick succession which doesn't happen for this program since stays open and impossible to add student objects that fast)

    listStudents();
}