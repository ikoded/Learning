#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string myText;
    std::ofstream myFile("filename.txt");

    std::string line;

    std::cout << "Enter file content (Enter 0 to exit or ctrl + z): ";
    getline(std::cin, line);

    while(line!="0"){
        myFile << line << std::endl;
        getline(std::cin, line);
        if(std::cin.fail()){
            break;
        }
    }

    myFile.close();

    std::ifstream readFile("filename.txt");

    while(getline(readFile, myText)){
        std::cout << myText << std::endl;
    }

    readFile.close();
}