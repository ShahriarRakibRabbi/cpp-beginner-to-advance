#include <iostream>


using namespace std;
void swap (int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}
void sort(int numbers[], int size) {
    for (int pass = 0; pass < size ; pass++) {
        for(int i = 1; i < size; i++) {
                if(numbers[i - 1] > numbers[i])
                    swap(numbers, i, (i - 1));
            }
    }
}

int main(void) {
    int numbers[] = { 3, 4, 5, 8, 1, 9, 2, 0 };

    sort(numbers, size(numbers));
    for (int number: numbers)
        cout << number << endl;

    return 0;
}