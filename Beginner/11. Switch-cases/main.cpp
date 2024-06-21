#include <iostream>

using namespace std;

int main(void) {
    char mathmaticalOperator;
    double x = 0;
    double y = 0;
    
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of Y : ";
    cin >> y;
    cout << "Press the operator for the operation you want to perform :" << endl;
    
    cout << "'+' for addition" << endl
         << "'-' for subtraction" << endl
         << "'*' for multipication" << endl
         << "'/' for division" << endl
         << "Operator : ";
    cin >> mathmaticalOperator;

    switch(mathmaticalOperator) {
        case '+' :
            cout << "Result : " << (x + y);
            break;
        case '-' :
            cout << "Result : " << (x - y);
            break;
        case '*' :
            cout << "Result : " << (x * y);
            break;
        case '/' :
            cout << "Result : " << (x / y);
            break;
        default :
            cout << "Invalid Operator!";
    }

    return 0;
}