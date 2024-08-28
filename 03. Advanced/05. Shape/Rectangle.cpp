#include<iostream>
#include "Rectangle.hpp"
#include "Shape.hpp"

using namespace std;

Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(int width) {
    this->width = width;
}

void Rectangle::setHeight(int height) {
    this->height = height;
}

void Rectangle::draw() const {
    cout << "Drawing a rectangle" << endl;
}

