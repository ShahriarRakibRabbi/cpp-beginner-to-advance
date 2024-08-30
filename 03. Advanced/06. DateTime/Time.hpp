#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>

using namespace std;

class Time {
public:
    Time(int hour, int minute, int second);
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
private:
    int hour;
    int minute;
    int second;
};

#endif