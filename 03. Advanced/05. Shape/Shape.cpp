#include <iostream>
#include "Shape.hpp"

using namespace std;

string Shape::getBackground() const {
    return background;
}

void Shape::setBackground(string background) {
    this->background = background;
}

void Shape::draw() const {
    cout << "Drawing a shape" << endl;
}