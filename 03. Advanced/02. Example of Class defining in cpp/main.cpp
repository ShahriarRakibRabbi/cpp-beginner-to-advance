#include <iostream>
#include "TextBox.hpp"

using namespace std;

int main(void) {
    TextBox textBox;
    textBox.setValue("Hello, World!");
    cout << "Value: " << textBox.getValue() << endl;
    return 0;
}
