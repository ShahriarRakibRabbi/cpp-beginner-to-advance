#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
    const int min = 1;
    const int max = 6;
    cout << "Dice is rolling..." << endl;

    srand(time(nullptr));
    int randomNumber1 = (rand() % (max - min +1)) + min;
    int randomNumber2 = (rand() % (max - min +1)) + min;

    cout << randomNumber1 << ", " << randomNumber2;

    return 0;
}
