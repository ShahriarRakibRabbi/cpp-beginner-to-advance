#include <iostream>

using namespace std;

string isValid(string customerNumber);

int main(void) {
    string customerNumber;
    cout << "Enter the cusomer : ";
    cin >> customerNumber;
    cout << isValid(customerNumber);
    return 0;
}

string isValid(string customerNumber) {
    if(customerNumber.length() != 6)
        return "INVALID";

    for(int i = 0; i <2 ; i++){ 
        if(!isalpha(customerNumber[i]))
            return "INVALID";
    }

    for(int i = 2; i <customerNumber.length(); i++){ 
        if(!isdigit(customerNumber[i]))
            return "INVALID";
    }

    return "VALID";
}