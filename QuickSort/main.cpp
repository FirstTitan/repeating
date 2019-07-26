#include <iostream>

int partition(int array[], int lo, int hi) {
    int mid = (hi + lo) / 2;
    int pivot = array[mid];
    int tail = lo;

    array[mid] = array[hi];
    array[hi] = pivot;

    for ( ; array[tail] < array[hi]; tail++ );
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            pivot = array[i];
            array[i] = array[tail];
            array[tail] = pivot;

            tail += 1;
        }
    }
    pivot = array[hi];
    array[hi] = array[tail];
    array[tail] = pivot;

    return tail;
}

void quickSort( int array[], int lo, int hi) {
    if ( hi > lo ) {
        int pivot = partition(array, lo, hi);

        quickSort(array, lo, pivot-1);
        quickSort(array, pivot+1, hi);
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(array, 0, 9);

    int last = 9;
    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;

    return 0;
}
