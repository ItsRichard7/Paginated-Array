#include <iostream>
#include "FileCreation.h"
#include "SortAlgorithms.h"

using namespace std;

int main() {
    FileCreation fileCreator;
    fileCreator.createFileCSV("binaryNumber");
    fileCreator.fillNumbers("binaryNumber" , 1);

    /*
    int arr[20];
    cout << "[";
    for (int i = 0; i < 20; ++i) {
        arr[i] = rand()%(1-100);
        if (i == 19){
            cout << arr[i];
        } else{
            cout << arr[i] << ",";
        }
    }
    cout << "]" << endl;
    int size = (sizeof(arr) / sizeof(arr[0]));
    SortAlgorithms sort;
    sort.quickSort(arr, 0, size -1);

    cout << "[";
    for (int i = 0; i < 20; ++i) {
        if (i == 19){
            cout << arr[i];
        } else{
            cout << arr[i] << ",";
        }
    }*/
    cout << "]";
    return 0;
}
