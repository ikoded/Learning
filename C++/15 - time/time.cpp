#include <iostream>
#include <ctime>
#include <string>

int main(){
    time_t timestamp;
    time(&timestamp);

    std::cout << ctime(&timestamp) << std::endl;

    timestamp = time(NULL);

    std::cout << ctime(&timestamp) << std::endl;

    struct tm datetime;

    datetime.tm_year = 2023 - 1900; datetime.tm_mon = 12-1; datetime.tm_mday =31;
    datetime.tm_hour = 12; datetime.tm_min = 30; datetime.tm_sec = 1; datetime.tm_isdst = -1;

    timestamp = mktime(&datetime);

    std::string weekdays[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    std::cout << ctime(&timestamp) << "Day of week: " << weekdays[datetime.tm_wday] << std::endl;
    // below works without having to declare mktime like line 20
    std::cout << asctime(&datetime) << std::endl;

    timestamp = time(NULL);
    struct tm localdatetime = *localtime(&timestamp);

    std::cout << localdatetime.tm_hour << std::endl;
}