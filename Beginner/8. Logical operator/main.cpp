#include <iostream>

using namespace std;

int main(void) {
    bool isCitigen = true;
    bool hasDegree = false;
    bool hasWorkExperience = true;

    bool isEligible = isCitigen && (hasDegree || hasWorkExperience);

    cout << boolalpha << isEligible;

    return 0;
}