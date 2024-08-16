#include <iostream>


using namespace std;

int main(void) {
    string fullName = "Shahriar Rakib Rabbi";
    string firstName = fullName.substr(0, fullName.find(" "));
    string middleName = fullName.substr(fullName.find(" ") + 1, (fullName.rfind(" ") - fullName.find(" ")));
    string lastName = fullName.substr(fullName.rfind(" ") + 1);
    cout << firstName << endl << middleName << endl << lastName;
    return 0;
}