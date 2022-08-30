#ifndef PAGINATED_ARRAY_SORTALGORITHMS_H
#define PAGINATED_ARRAY_SORTALGORITHMS_H

#include "PagedArray.h"

class SortAlgorithms {
private:
    int partition(PagedArray array, int low, int high, int pivot);
    int swap(int a, int b);
    int assign(int a, int b);
    int quickSortAux(PagedArray array, int low, int high);
public:
    int quickSort (PagedArray array, int low, int high);
    int selectionSort(PagedArray array, int size);
    int insertionSort(PagedArray array, int size);
};


#endif //PAGINATED_ARRAY_SORTALGORITHMS_H
