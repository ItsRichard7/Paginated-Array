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

int SortAlgorithms::quickSortAux(int *array, int low, int high){
    if (low < high){
        int pivot = array[high];
        int index = partition(array, low, high, pivot);

        quickSortAux(array, low, index - 1);
        quickSortAux(array, index + 1, high);
    }
    return 0;
}

int SortAlgorithms::quickSort (int *array, int low, int high){
    quickSortAux(array, low, high);
    cout << "Sorted by Quick Sort:" << endl;
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
    cout << "Sorted by Selection Sort:" << endl;
    return 0;
}

int SortAlgorithms::insertionSort(int *array, int size) {
    int temp;
    int index;
    for (int i = 0; i < size; i++) {
        temp = array[i];
        index = i - 1;
        while (index >= 0 && temp <= array[index]){
            array[index+1] = array[index];
            index--;
        }
        array[index+1] = temp;
    }
    cout << "Sorted by Insertion Sort:" << endl;
    return 0;
}