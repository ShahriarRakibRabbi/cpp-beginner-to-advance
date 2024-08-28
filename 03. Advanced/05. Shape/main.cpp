#include<iostream>
#include "Rectangle.hpp"
#include "Circle.hpp"

using namespace std;

int main(void) {
    Rectangle rectangle{10, 20};
    rectangle.setBackground("Green");
    cout << "rectangle.getBackground(): " << rectangle.getBackground() << endl;
    Circle circle{5};
    circle.setBackground("Red");
    cout << "circle.getBackground(): " << circle.getBackground() << endl;
    return 0;
}