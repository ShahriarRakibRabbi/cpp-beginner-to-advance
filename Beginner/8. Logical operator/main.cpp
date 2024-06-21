#include <iostream>

using namespace std;

int main(void) {
    bool isCitigen = true;
    bool hasDegree = false;
    short yearsOfWorkExperience = 3;

    bool isEligible = isCitigen && (hasDegree || (yearsOfWorkExperience >= 2));

    cout << boolalpha << isEligible;

    return 0;
}