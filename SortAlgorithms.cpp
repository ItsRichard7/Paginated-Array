#include "SortAlgorithms.h"
#include <bits/stdc++.h>

using namespace std;

int SortAlgorithms::partition(int *arr, int low, int high, int pivot) {
    int index = low;
    for (int i = low; i <= high; ++i) {
        if (arr[i]<=pivot){
           swap(arr[index],arr[i]);
           index++;
        }
    }
    index--;
    return index;
}

int SortAlgorithms::quickSort(int *arr, int low, int high) {
    if (low < high){
        int pivot = arr[high];
        int index = partition(arr, low, high, pivot);

        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
    return 0;
}