#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

using namespace std;

class Shape {
public :
    string getBackground() const;
    void setBackground(string background);
private :
    string background;
};

#endif