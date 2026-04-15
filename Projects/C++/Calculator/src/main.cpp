#include <iostream>
#include <vector>
#include "../include/Calculator.h"
#include "../include/Operations.h"

using namespace std;

Calculator calc;

/*
Prints welcome message for program with selection choices
*/
void printWelcome(){
    cout << "----------------------------------" << endl;
    cout << "     Welcome to Calculator" << endl;
    cout << "----------------------------------" << endl;

    cout << "Choices for Calculator:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << endl;
}

char processChoice(){
    char choice;
    cout << "Please enter a choice from above (x to exit): ";
    cin >> choice;

    return choice;
}

void queueOperations(){
    int number;
    vector<int> nums;

    cout << "Please enter numbers you would like to queue in pairs, operations will happen to each pair of respective operation from left to right.\nProgram will erase queue if only one member is left (ie odd number of n queue given).\nType in queue here (x to exit):" << endl;

    while(cin >> number){
        nums.push_back(number);
    }
    cin.clear(); // clear input from any extra leftover like x for exiting
    cin.ignore(10000, '\n'); // clear input of new lines that persist after user typed x
    calc.setMemory(nums);
}

void getResults(char choice){
    vector<int> nums = calc.queueNumbers(); // grab first 2 nums to do operation
    while(!nums.empty()){
        switch(choice){
                case '1' : {
                    int result = Operations::performAddition(nums.front(), nums.back());
                    cout << "\n" << nums.front() << " + " << nums.back() << " = " << result << endl;
                    break;
                }
                case '2' : {
                    int result = Operations::performSubtraction(nums.front(), nums.back());
                    cout << "\n" << nums.front() << " - " << nums.back() << " = " << result << endl;
                    break;
                }
                case '3' : {
                    int result = Operations::performMultiplication(nums.front(), nums.back());
                    cout << "\n" << nums.front() << " * " << nums.back() << " = " << result << endl;
                    break;
                }
                case '4' : {
                    int result = Operations::performDivision(nums.front(), nums.back());
                    cout << "\n" << nums.front() << " / " << nums.back() << " = " << result << endl;
                    break;
                }
                default: {
                    break;
                }
            }

            nums = calc.queueNumbers();
    }
}

bool continueornot(){
    char choice; 
    cout << "Continue? y/n: ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y'){
        return true;
    }else{
        return false;
    }
}

int main(){
    char choice;
    bool continueff = false;
    bool calculatorRun = true;

    try{
        while(calculatorRun){
            // If program is not continuing with last choice, this allows operations to be ran as many times until the user types n when asked to continue
            if(!continueff){
                printWelcome();
                choice = processChoice();
            }
            
            switch(choice){
                case '1' : {
                    cout << "Addition Selected.\n" << endl;
                    queueOperations();
                    getResults(choice);
                    continueff = continueornot();

                    break;
                }
                case '2' : {
                    cout << "Subtraction Selected.\n" << endl;
                    queueOperations();
                    getResults(choice);
                    continueff = continueornot();
                    
                    break;
                }
                case '3' : {
                    cout << "Multiplication Selected.\n" << endl;
                    queueOperations();
                    getResults(choice);
                    continueff = continueornot();
                    
                    break;
                }
                case '4' : {
                    cout << "Division Selected.\n" << endl;
                    queueOperations();
                    getResults(choice);
                    continueff = continueornot();
                    
                    break;
                }
                case 'x': {
                    calculatorRun = false;
                    break;
                }
                default: {

                }
            }
        }

    }catch (const exception &e){
        throw(e);
        cout << "Error occured with program, exiting." << endl;
        return 1;
    }

    return 0;
}