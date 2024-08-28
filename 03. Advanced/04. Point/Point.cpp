#include "Point.hpp"

Point::Point(int x, int y) : x{x}, y{y} {

}

bool Point::operator==(const Point other) const {
    return (x == other.x) && (y == other.y);
}

bool Point::operator!=(const Point other) const {
    return !((x == other.x) && (y == other.y));
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

ostream& operator<<(ostream& stream, const Point& point){
    stream << "(" << point.getX() << ", " << point.getY() << ")" << endl;
    return stream;
}