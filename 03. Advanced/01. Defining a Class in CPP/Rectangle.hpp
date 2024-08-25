#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle {
private :
    int width;
    int height;  
public :
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
};

#endif