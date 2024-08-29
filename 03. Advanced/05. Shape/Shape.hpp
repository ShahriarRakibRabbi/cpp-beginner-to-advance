#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

using namespace std;

class Shape {
public :
    string getBackground() const;
    void setBackground(string background);
    virtual void draw() const = 0;
private :
    string background;
};

#endif