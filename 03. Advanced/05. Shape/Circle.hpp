#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include "Shape.hpp"

using namespace std;

class Circle : public Shape {
public :
    Circle() = default;
    explicit Circle(int radius);
    
    int getRadius() const;
    void setRadius(int radius);
    void draw() const override;
private :
    int radius = 0;
};

#endif