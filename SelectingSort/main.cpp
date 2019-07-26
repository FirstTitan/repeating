#include <iostream>

void selectingSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }

        if ( min != i ) {
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    selectingSort(array, 10);

    int last = 9;
    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;

    return 0;
}
