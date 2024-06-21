#include <iostream>

using namespace std;

int main(void) {
    double temperatures[] = { 60, 80, 90 };
    double sum = 0.0;
    for (double temperature: temperatures)
        sum += temperature;

    int count = sizeof(temperatures) / sizeof(double);
    double average = sum / count;
    cout << "Average : " << average;

    return 0;
}