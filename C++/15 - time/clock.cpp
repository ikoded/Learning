#include <iostream>
#include <ctime>
#include <locale>

struct separated : std::numpunct<char> {
    char do_thousands_sep() const override { return ','; }
    std::string do_grouping() const override { return "\003"; }
};

int main(){
    // clock() is more accurate for counting time a program ran
    clock_t before = clock();

    int x = 100000000;
    for(int i = x; i>0; i--){
    }

    clock_t duration = clock() - before;
    std::locale customlocale(std::cout.getloc(), new separated);
    std::cout.imbue(std::locale(customlocale));

    // notice how the comma iimbue for , separators doesn't work on duration as intended because the time it takes is less than 1,000
    std::cout << (float)duration / CLOCKS_PER_SEC << " takes to run of " << x << " loop length." << std::endl;
}