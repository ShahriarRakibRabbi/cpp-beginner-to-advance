#include <iostream>
#include "SmartPointer.hpp"

using namespace std;

SmartPointer::SmartPointer(int* ptr) : ptr(ptr) {
    cout << "Constructing Smart Pointer" << endl;
}

SmartPointer::~SmartPointer() {
    cout << "Destructing Smart Pointer" << endl;
    delete ptr;
    ptr = nullptr;
}