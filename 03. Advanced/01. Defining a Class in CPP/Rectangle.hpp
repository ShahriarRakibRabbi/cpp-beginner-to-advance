#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

#include <iostream>

using namespace std;
class Rectangle {
public :
    Rectangle() = default;
    Rectangle(const Rectangle& source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& colour);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
private :
    int width = 0;
    int height = 0;  
    string colour;
};

#endif