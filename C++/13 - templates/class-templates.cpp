#include <iostream>
#include <string>

template <typename T>
class Box{
    private:
        T value;
    public:
        Box(T value){
            this->value = value;
        }
        Box(T value, T multiply){
            this->value = value * multiply;
        }

        T getValue() const{ return value; }
};

int main(){
    Box<int> intBox(5);
    Box<int> intBox2(5,5);
    Box<std::string> stringBox("Hello");
    // Notice cannot multiply string box because obviously

    std::cout << intBox.getValue() << std::endl;
    std::cout << intBox2.getValue() << std::endl;
    std::cout << stringBox.getValue() << std::endl;

    return 0;
}