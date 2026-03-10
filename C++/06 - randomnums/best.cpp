#include <random>
#include <iostream>

std::mt19937& random_generator(){
    thread_local static std::mt19937 mt{std::random_device{}()};
    return mt;
}

template<typename Number>
Number random_number(Number from, Number to){
    static_assert(std::is_integral<Number>::value||std::is_floating_point<Number>::value, "Parameters must be integer or floating point numbers");

    using Distribution = typename std::conditional
    <
        std::is_integral<Number>::value,
        std::uniform_int_distribution<Number>,
        std::uniform_real_distribution<Number>
    >::type;

    thread_local static Distribution dist;

    return dist(random_generator(),typename Distribution::param_type(from,to));
}

int main(){
    std::cout << random_number(1,6);
    return 0;
}