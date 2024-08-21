#include <iostream>

using namespace std;

struct Point {
    int x = 0;
    int y = 0;
};

bool operator== (const Point& point1, const Point& point2) {
    return
    (point1.x == point2.x && point1.y == point2.y);
}

ostream& operator<<(ostream& stream, const Point& point) {
    stream << "X : " << point.x << " Y : " << point.y;
    return stream;
}

int main(void) {
    Point point1 = {2, 5};
    Point point2 = {2, 5};
    cout << "Point 1 : " << point1 << endl << "Point 2 : " << point2 << endl;
    if(point1 == point2)
        cout << "Equal";
    else
        cout<< "not Equal";

    return 0;
}