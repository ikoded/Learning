#include <iostream>
#include <ctime>

int main(){
    time_t now;
    time_t nextYear;
    struct tm datetime;

    now = time(NULL);
    datetime = *localtime(&now);

    datetime.tm_year = 127; // 2027 because this is the future
    datetime.tm_mon = 0; datetime.tm_mday = 1; // month day being 1-31
    datetime.tm_min = 0; datetime.tm_sec = 0; datetime.tm_hour = 0 ; datetime.tm_isdst = -1; // -1 is unknown which uses system locale, 0 is not in effect and 1 is in effect

    nextYear = mktime(&datetime);

    int diff = difftime(nextYear, now);

    std::cout << diff << " seconds until next year." << std::endl;
    std::cout << ((diff/60)/60) << " hours until next year." << std::endl;
    std::cout << (((diff/60)/60)/24) << " days until next year." << std::endl;
}