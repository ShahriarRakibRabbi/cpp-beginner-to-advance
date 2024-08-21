#include <iostream>


using namespace std;

int main(void) {
    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while(true) {
        cout << "Number : ";
        cin >> numbers[entries];
        if(cin.fail())
            break;
        entries ++;
        
        if(entries == capacity) {
            capacity *= 2;
            int* newNumbers = new int[capacity];
            for(int i = 0; i < entries; i++)
                newNumbers [i] = numbers[i];
            delete[] numbers;
            numbers = newNumbers;
        }
    }

    for(int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;

    return 0;
}