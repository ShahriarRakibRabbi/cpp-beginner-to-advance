#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

#include <iostream>
using namespace std;

class TextBox {
public :
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private :
    string value;

};

#endif