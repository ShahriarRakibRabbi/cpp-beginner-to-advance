#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main(void) {
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.height = 20;
    cout << " Area: " << rectangle.getArea();
    return 0;
}