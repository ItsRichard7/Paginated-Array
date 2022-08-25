#ifndef PAGINATED_ARRAY_SORTALGORITHMS_H
#define PAGINATED_ARRAY_SORTALGORITHMS_H


class SortAlgorithms {
private:
    int partition(int arr[], int low, int high, int pivot);
public:
    int quickSort(int arr[], int low, int high);
};


#endif //PAGINATED_ARRAY_SORTALGORITHMS_H
