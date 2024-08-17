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
    int alphabetCount = 0;
    int digitCount;
    for(int i = 0; i <customerNumber.length(); i++){ 
        if(isalpha(customerNumber[i]))
            alphabetCount++;

        if(alphabetCount > 2)
            return "INVALID";
    }

    for(int i = 0; i <customerNumber.length(); i++){ 
        if(isdigit(customerNumber[i]))
            digitCount++;

        if(digitCount > 2)  
            return "INVALID";
    }

    return "VALID";
}