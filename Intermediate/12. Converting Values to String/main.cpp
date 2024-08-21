#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string toString(double number) {
   stringstream stream;
   stream << fixed << setprecision(2) <<number;
   return stream.str();
}

int main (void) {
    double number = 12.467;
    string str = toString( number );
    cout << str;
    return 0;
}