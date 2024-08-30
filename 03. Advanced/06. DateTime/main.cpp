#include <iostream>
#include "DateTime.hpp"

using namespace std;

int main(void) {
    DateTime dateTime{2020, 10, 10, 10, 10, 10};
    dateTime.print();
    return 0;
}