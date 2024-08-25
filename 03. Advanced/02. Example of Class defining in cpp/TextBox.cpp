#include "TextBox.hpp"
#include <iostream>

using namespace std;

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this -> value = value;
}