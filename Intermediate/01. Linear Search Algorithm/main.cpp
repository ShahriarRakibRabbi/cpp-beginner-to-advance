#include <iostream>
#include "Utils/search.hpp"


using namespace std;

int main(void) {

    int number = 5;
    int numbers[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(numbers) / sizeof(int);
    bool isIncluded = true;
    
    if(search(numbers, size, number) == -1)
        isIncluded = false;
        
    cout << boolalpha << isIncluded << endl;

    return 0;
}