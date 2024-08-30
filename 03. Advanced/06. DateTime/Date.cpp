#include <iostream>
#include "Date.hpp"
#include <stdexcept>

using namespace std;

Date::Date(int year, int month, int day) {
    if (year < 1) {
        throw invalid_argument("Invalid year");
    }
    if (month < 1 || month > 12) {
        throw invalid_argument("Invalid month");
    }

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        throw invalid_argument("Invalid day");
    }

    this->year = year;
    this->month = month;
    this->day = day;
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}