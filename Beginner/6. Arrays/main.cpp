#include <iostream>

using namespace std;

int main(void){
    string names[3];

    cout << "Enter the first name : ";
    getline(cin, names[0]);

    cout << "Enter the second name : ";
    getline(cin, names[1]);

    cout << "Enter the third name : ";
    getline(cin, names[2]);

    cout << endl << names[0];
}