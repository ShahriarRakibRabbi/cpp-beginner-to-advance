#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    cout<< sizeof(int) << endl
        << sizeof(long) << endl
        << sizeof(long long) << endl;

    cout << numeric_limits<int>::max() << endl 
         << numeric_limits<int>::min() << endl;

    return 0;
}