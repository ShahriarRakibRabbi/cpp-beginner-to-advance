#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_String(double number, int precision) {
   stringstream stream;
   stream << fixed << setprecision(precision) <<number;
   return stream.str();
}

int main (void) {
    double number = 12.467;
    cout << to_String( number, 2 );
    return 0;
}