#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Loading";

    for(int i = 0; i < 5; ++i){
        std::cout << "."; // sleep is useful for seeing flush, technically you do not need it but flush outputs immediately instead of printing all at once at end of program run time when buffer auto flushes
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Done!";
    return 0 ;
}