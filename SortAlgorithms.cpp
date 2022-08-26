#include "SortAlgorithms.h"
#include <bits/stdc++.h>

using namespace std;

int SortAlgorithms::partition(int *array, int low, int high, int pivot) {
    int index = low;
    for (int i = low; i <= high; ++i) {
        if (array[i]<=pivot){
           std::swap(array[index],array[i]);
           index++;
        }
    }
    index--;
    return index;
}

int SortAlgorithms::quickSort(int *array, int low, int high){
    if (low < high){
        int pivot = array[high];
        int index = partition(array, low, high, pivot);

        quickSort(array, low, index - 1);
        quickSort(array, index + 1, high);
    }
    return 0;
}

int SortAlgorithms::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int SortAlgorithms::selectionSort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size ; j++) {
            if (array[j] < array[min])
                min = j;
        }
        swap(&array[min], &array[i]);
    }
    return 0;
}