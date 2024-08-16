#include <iostream>


using namespace std;

int main(void) {
    string fullName = "Shahriar Rakib Rabbi";
    string firstName = fullName.substr(0, 8);
    string middleName = fullName.substr(9, 5);
    string lastName = fullName.substr(15, 5);
    cout << firstName << endl << middleName << endl << lastName;
    return 0;
}