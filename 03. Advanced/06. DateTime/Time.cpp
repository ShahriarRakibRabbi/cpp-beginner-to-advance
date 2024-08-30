#include <iostream>
#include "Time.hpp"

using namespace std;

Time::Time(int hour, int minute, int second) {
    
    if (hour < 0 || hour > 23) {
        throw invalid_argument("Invalid hour");
    }
    if (minute < 0 || minute > 59) {
        throw invalid_argument("Invalid minute");
    }
    if (second < 0 || second > 59) {
        throw invalid_argument("Invalid second");
    }

    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}