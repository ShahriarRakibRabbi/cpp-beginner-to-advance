#ifndef SMART_POINTER_HPP
#define SMART_POINTER_HPP

#include <iostream>

using namespace std;

class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer() = default;
private:
    int* ptr;
};

#endif