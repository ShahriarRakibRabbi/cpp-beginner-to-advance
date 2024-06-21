#include <iostream>

using namespace std;

int main(void) {
    int sales = 11000;
    double commission = 0.0;

    if (sales <= 10000 ) {
        commission = (10 / static_cast<double>(100));
    } else if (sales <= 15000) {
        commission = (15 / static_cast<double>(100));
    } else {
        commission = (20 / static_cast<double>(100));
    }

    cout << commission;

    return 0;
}