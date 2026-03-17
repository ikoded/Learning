#pragma once
#include <iostream>

template <typename T>
class Vector2 {
    public:
        T x, y;

        Vector2(T x = 0, T y = 0) : x(x), y(y) {}

        Vector2<T> operator+(const Vector2<T>& other) const {
            return Vector2<T>(x+ other.x, y + other.y);
        }

        Vector2<T> operator*(T scalar) const {
            return Vector2<T>(x*scalar,y*scalar);
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
};