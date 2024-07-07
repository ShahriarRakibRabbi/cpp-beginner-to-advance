#include <iostream>

using namespace std;

int main(void) {
    int numbers[] = { 10, 20, 30 };
    int* ptr = numbers + (size(numbers) - 1);
    int index = 0;

    while(index < size(numbers)) {
        cout << *(ptr - index) << endl;
        index ++;
    }
}