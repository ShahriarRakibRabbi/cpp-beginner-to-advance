#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main(void) {
    Rectangle rectangle{10, 20};
    Rectangle rectangle2{rectangle};
    const Rectangle rectangle3{10, 20, "Red"};
    cout << "Object Count: " << Rectangle::getObjectCount() << endl;
    cout << "Width: " << rectangle2.getWidth() << endl;
    cout << "Height: " << rectangle2.getHeight() << endl;
    cout << "Area: " << rectangle2.getArea() << endl;
    return 0;
}