#ifndef DATE_TIME_HPP
#define DATE_TIME_HPP

#include <iostream>
#include "Date.hpp"
#include "Time.hpp"

using namespace std;

class DateTime : public Date, public Time {
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
    void print() const;
};

#endif