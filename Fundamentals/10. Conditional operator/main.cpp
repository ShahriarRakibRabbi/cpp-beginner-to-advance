#include <iostream>

using namespace std;

int main(void) {
    int x = 0;
    int y = 0;
    int max = 0;

    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of Y : ";
    cin >> y;

    max = (x > y) ? x : y;
    cout << "The maximum number between x & y is : " << max;

    return 0;
}