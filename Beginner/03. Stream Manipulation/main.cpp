#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {

    cout << left << setw(15) << "Course" << left << setw(10) << "Students" << endl;

    cout << left << setw(15) << "C++" << right << setw(10) << 100 << endl
         << left << setw(15) <<"JavaScript" << right << setw(10) << 50 << endl;

    cout << endl;

    //Show boolean as true or false instead of 0 and 1

    bool isTrue = false;

    cout << boolalpha << isTrue << endl
         << noboolalpha << isTrue << endl;
    

    return 0;
}