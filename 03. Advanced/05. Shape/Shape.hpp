#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

using namespace std;

class Shape {
public :
    string getBackground() const;
    void setBackground(string background);
    virtual void draw() const;
private :
    string background;
};

#endif