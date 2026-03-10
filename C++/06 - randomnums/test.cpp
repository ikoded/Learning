#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    int attempts = 0;
    int dice = 1;
    do{
        std::cout << "Rolling the dice...";
        dice = rand() % 7;
        std::cout << "Rolled " << dice << std::endl;
        attempts++;
    }while(dice != 6);

    std::cout << "Took " << attempts << " tries.";

    //Not a great randomizer because if program ran back to back it will be the same amount of attempts since same seed
    return 0;
}