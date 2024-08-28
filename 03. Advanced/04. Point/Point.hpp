#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

using namespace std;

class Point {
public :
    Point() = default;
    Point(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    bool operator==(const Point other) const;
    bool operator!=(const Point other) const;
private :
    int x = 0;
    int y = 0;
};

 ostream& operator<<(ostream& stream, const Point& point);

#endif