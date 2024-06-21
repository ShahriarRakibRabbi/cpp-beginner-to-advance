#include <iostream>

using namespace std;

int main(void) {
    int x = 0;
    int result = 1;
    
    cout << "Enter a positive number : ";
    cin >> x;

    if (x < 0)
        cout << "Invalid input!";
    else {
        for (int i = 1; i <= x; i++)
            result *= i;
        cout << "Factorial of " << x << " is " << result;
    }

    

    return 0;
}