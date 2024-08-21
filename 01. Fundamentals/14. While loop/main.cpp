#include <iostream>

using namespace std;

int main(void) {
    int magicNumber = 11;
    int guess = 0;

    while (guess != magicNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess != magicNumber) 
            cout << "Try again!" << endl;   
    }

    return 0;
}