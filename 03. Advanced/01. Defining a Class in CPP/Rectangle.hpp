#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle {
private :
    int width = 0;
    int height = 0;  
public :
    Rectangle() = default;
    Rectangle(int width, int height);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
};

#endif