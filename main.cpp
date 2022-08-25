#include <iostream>
#include "FileCreation.h"
#include "SortAlgorithms.h"

using namespace std;

int main() {
    FileCreation fileCreator;
    fileCreator.createFile("binaryNumber", 1);

    int arr[20];
    cout << "[";
    for (int i = 0; i < 20; ++i) {
        arr[i] = rand()%(1-100);
        cout << arr[i] << ",";
    }
    cout << "]";

    SortAlgorithms sort;
    sort.quickSort(arr, 0, 19);

    cout << "Ya ordenado" << endl;
    cout << "[";
    for (int i = 0; i < 20; ++i) {
        cout << arr[i] << ",";
    }
    cout << "]";
    return 0;
}
