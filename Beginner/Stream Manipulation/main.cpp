#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {

    cout << left << setw(15) << "Course" << left << setw(10) << "Students" << endl;

    cout << left << setw(15) << "C++" << right << setw(10) << 100 << endl
         << left << setw(15) <<"JavaScript" << right << setw(10) << 50;
    

    return 0;
}