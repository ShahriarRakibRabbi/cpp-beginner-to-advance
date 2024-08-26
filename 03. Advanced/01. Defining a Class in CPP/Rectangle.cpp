#include "Rectangle.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle(const Rectangle& source) {
    cout << "Copying a Rectangle" << endl;
    this -> width = source.width;
    this -> height = source.height;
    this -> colour = source.colour;
}

Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& colour): Rectangle{width, height} {
    cout << "Constructing a Rectangle with colour" << endl;
    this -> colour = colour;
}

Rectangle::~Rectangle() {
    cout << "Destructing a Rectangle" << endl;
}

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