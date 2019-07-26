#include <iostream>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temp[size];
    int i = lo;
    int j = mid;
    int k = 0;

    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            temp[k] = array[i];
            i += 1;
        } else {
            temp[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        temp[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        temp[k] = array[j];
    }
    for ( i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = temp[k];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;

    if ( mid > lo ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
    }
    merge(array, lo, mid, hi);
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    mergeSort(array, 0, 10);

    int last = 9;
    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;

    return 0;
}