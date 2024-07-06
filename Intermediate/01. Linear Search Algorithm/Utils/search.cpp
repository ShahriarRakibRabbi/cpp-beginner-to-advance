#include "search.hpp"

int search(int numbers[], int size, int number) {

    for(int i = 0; i < size; i++){
        if(numbers[i] == number)
            return i;
    }
    return -1;
}