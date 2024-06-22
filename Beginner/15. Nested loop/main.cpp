#include <iostream>

using namespace std;

int main(void) {
    int rows = 0;
    cout << "Rows : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int k = 0; k < i; k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}