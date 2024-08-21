#include <iostream>
#include <limits> 

using namespace std;

int getNumber(const string& prompt) {
    int number;
    while(true) {
        cout << prompt;
        cin >> number;
        if(cin.fail()){
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            break;
    }
    return number;
}
int main(void) {
    int x = getNumber("Enter the first number : ");
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    int y = getNumber("Enter the Second number :  ");
    cout << "X : " << x << " Y : " << y;
    return 0;
}