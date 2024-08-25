#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

#include <iostream>
using namespace std;

class TextBox {
private :
    string value;
public :
    string getValue();
    void setValue(const string& value);
};

#endif