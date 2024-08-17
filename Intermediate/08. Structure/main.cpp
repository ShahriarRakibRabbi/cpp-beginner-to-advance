#include <iostream>

using namespace std;

struct CustomerInfo {
    int id = 0;
    string name;
    string email;
};

int main(void) {
    CustomerInfo customerInfo;
    cout << "Enter the id of the customer :" ;
    cin >> customerInfo.id;
    cout << "Enter the name of the customer :" ;
    cin >> customerInfo.name;
    cout << "Enter the email of the customer :" ;
    cin >> customerInfo.email;
    
    cout << endl << "=== Customer Information ===" << endl << endl;
    cout << "ID : " << customerInfo.id << endl
         << "Name : " << customerInfo.name << endl
         << "E-Mail : " << customerInfo.email << endl;

    return 0;
}