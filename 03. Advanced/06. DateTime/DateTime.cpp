#include <iostream>
#include "DateTime.hpp"

using namespace std;

DateTime::DateTime(int year, int month, int day, int hour, int minute, int second) : Date(year, month, day), Time(hour, minute, second) {
}

void DateTime::print() const {
    cout << getYear() << "-" << getMonth() << "-" << getDay() << " " << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}

