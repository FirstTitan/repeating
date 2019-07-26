#include <iostream>

void insertionSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int j = i;
        int temp = array[i];

        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    insertionSort(array, 10);

    int last = 9;
    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;

    return 0;
}
