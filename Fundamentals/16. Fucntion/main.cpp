#include <iostream>

using namespace std;

int findMax(int x, int y) {
   return (x > y) ? x : y;
}

int main(void) {
    cout << "Larger : " << findMax(1, 2);
    return 0;
}

