#include <iostream>

using namespace std;

int main(void) {
    string street;
    string city;
    string state;
    string zipCode;

    cout << "Enter the name of your street : " ;
    getline(cin, street);

    cout << "Enter the name of your city : " ;
    getline(cin, city);

    cout << "Enter the name of your state : " ;
    getline(cin, state);

    cout << "Enter your zipCode : " ;
    getline(cin, zipCode);

    cout << endl << street << endl << city << ", " << state << ", " << zipCode;

    return 0;
}