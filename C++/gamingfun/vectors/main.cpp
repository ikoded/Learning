#include "vector2.h"

int main(){
    Vector2<float> pos(1.5f,2.0f);
    Vector2<float> vel(0.5f, 1.0f);

    Vector2<float> nextPos = pos + vel + 2.0f;
    nextPos.print(); // (2.5,4.0)

    Vector2<float> gridPos(3,4);
    gridPos.print(); // (3,4)
    return 0;
}