#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include "Shape.hpp"

using namespace std;

class Rectangle : public Shape {
public :
    Rectangle() = default;
    explicit Rectangle(int width, int height);
    
    int getWidth() const;
    int getHeight() const;
    void setWidth(int width);
    void setHeight(int height);
private :
    int width = 0;
    int height = 0;
};

#endif