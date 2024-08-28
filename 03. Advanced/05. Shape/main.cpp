#include<iostream>
#include "Rectangle.hpp"
#include "Circle.hpp"

using namespace std;

int main(void) {
    Rectangle rectangle{10, 20};
    rectangle.setBackground("Green");
    cout << "Rectangle Background: " << rectangle.getBackground() << endl;
    Circle circle{5};
    circle.setBackground("Red");
    cout << "Circle Background: " << circle.getBackground() << endl;
    circle.draw();
    rectangle.draw();
    return 0;
}