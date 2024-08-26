#include "TextBox.hpp"
#include <iostream>

using namespace std;

TextBox::TextBox(const string& value){
    setValue(value);
}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this -> value = value;
}