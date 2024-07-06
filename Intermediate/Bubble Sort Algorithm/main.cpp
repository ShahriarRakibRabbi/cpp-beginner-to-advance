#include <iostream>


using namespace std;

int main(void) {
    int numbers[] = { 3, 4, 5, 8, 1, 9, 2, 0 };

    for(int i = 0; i < size(numbers) - 1; i++) {
        for(int j = 0; j < size(numbers) - (i+1); j++) {
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    for(int number: numbers){
        cout << number << endl;
    }
}