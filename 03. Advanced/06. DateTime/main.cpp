#include <iostream>
#include "DateTime.hpp"

using namespace std;

int main(void) {
    try{
        DateTime dateTime{2020, 10, 10, 10, 10, 10};
        dateTime.print();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}