#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main(void) {
    Rectangle rectangle{10, 20};
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Height: " << rectangle.getHeight() << endl;
    cout << "Area: " << rectangle.getArea() << endl;
    return 0;
}