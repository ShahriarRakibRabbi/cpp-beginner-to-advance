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

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if(width < 0) 
        throw invalid_argument("Width");
    this -> width = width;
}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int height) {
    if(height < 0) 
        throw invalid_argument("Height");
    this -> height = height;
}