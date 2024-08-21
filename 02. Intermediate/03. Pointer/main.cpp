#include <iostream>


using namespace std;

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(void) {
    int first = 2;
    int second = 9;
    cout << "First : " << first << " Second : " << second << endl;
    swap(&first, &second);
    cout <<"After Swap " << endl << "First : " << first << " Second : " << second << endl;
    return 0;
}