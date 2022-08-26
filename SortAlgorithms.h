#ifndef PAGINATED_ARRAY_SORTALGORITHMS_H
#define PAGINATED_ARRAY_SORTALGORITHMS_H


class SortAlgorithms {
private:
    int partition(int array[], int low, int high, int pivot);
    int swap(int *a, int *b);
public:
    int quickSort(int array[], int low, int high);
    int selectionSort(int array[], int size);
};


#endif //PAGINATED_ARRAY_SORTALGORITHMS_H
