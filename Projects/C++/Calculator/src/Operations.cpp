#include "../include/Operations.h"

int Operations::performAddition(int num1, int num2){
    return num1 + num2;
}

int Operations::performSubtraction(int num1, int num2){
    return num1 - num2;
}

int Operations::performMultiplication(int num1, int num2){
    return num1 * num2;
}

int Operations::performDivision(int num1, int num2){
    // Undefined
    if(num2 == 0){
        return 0;
    }else{
        return num1 / num2;
    }
}