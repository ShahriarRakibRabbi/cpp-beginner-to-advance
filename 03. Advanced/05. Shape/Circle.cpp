#include <iostream>
#include "Circle.hpp"

using namespace std;

Circle::Circle(int radius) {
    this->radius = radius;
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

void Circle::draw() const {
    cout << "Drawing a circle" << endl;
}