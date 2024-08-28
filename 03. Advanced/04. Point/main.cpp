#include <iostream>
#include "Point.hpp"

using namespace std;

int main(void) {
    Point point1{1, 2};
    Point point2{1, 2};
    Point point3{3, 4};
    cout << "point1: " << point1 << endl;
    cout << "point2: " << point2 << endl;
    cout << "point3: " << point3 << endl; 
    cout << "point1 + point2: " << point1 + point2 << endl;
    cout << "point1 + point3: " << point1 + point3 << endl;
    cout << "point1 == point2: " << (point1 == point2) << endl;
    cout << "point1 != point2: " << (point1 != point2) << endl;
    cout << "point1 == point3: " << (point1 == point3) << endl;
    cout << "point1 != point3: " << (point1 != point3) << endl;
    return 0;
}