#include <iostream>

using namespace std;

struct Address {
    string street;
    string city;
    short zipcode;
};

struct CustomerInfo {
    int id = 0;
    string name;
    string email;
    Address address;
};

int main(void) {
    
    CustomerInfo customerInfo = {
                    1122, 
                    "Sha",
                    "xyz@abcmail.com",            
                    {
                        "Pallabi", 
                        "Mirpur", 
                        1206
                }
    };

    return 0;
}