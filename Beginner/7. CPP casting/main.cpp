#include <iostream>

using namespace std;

int main(void){
    int x = 10;
    int y = 3;
    double z = x / static_cast<double>(y);
    cout << z;

    return 0;
}