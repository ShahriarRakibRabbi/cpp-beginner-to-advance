#include "Rectangle.hpp"
#include <iostream>

using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimention: " << width << ", " << height << endl;
}

int Rectangle::getArea() {
    return width * height;
}