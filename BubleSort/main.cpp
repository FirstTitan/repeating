#include <iostream>

void bubleSort(int array[], int size) {
    int last = size - 1;
    bool isSorted = false;

    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;

        isSorted = true;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int temp = array[j];
                array[j] = array[next];
                array[next] = temp;

                isSorted = false;
            }
        }
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubleSort(array, 10);

    int last = 9;
    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;

    return 0;
}
