#include <iostream>
#include <ctime>

int main(){
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    // month day year
    // using %d because windows MSVC %e is not supported
    strftime(output, 50, "%B %d %Y", &datetime);
    std::cout << output << std::endl;

    //Hours(12):Minutes:Seconds AM/PM
    strftime(output, 50, "%I:%M:%S %p", &datetime);
    std::cout << output << std::endl;

    // Month day year in numeric value
    strftime(output, 50, "%m/%d/%y", &datetime);
    std::cout << output << std::endl;

    // Weekday Month Day Year Hour(24):minute:second AM/PM
    strftime(output, 50, "%a %b %d %Y %H:%M:%S %p", &datetime);
    std::cout << output << std::endl;
}