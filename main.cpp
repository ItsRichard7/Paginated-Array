#include <iostream>
#include "FileCreation.h"
#include "SortAlgorithms.h"
#include "BinaryTraductor.h"

using namespace std;

int main(int args, char** argv) {
    if (args == 7){
        FileCreation fileCreator;
        SortAlgorithms sort;
        
        /*if (argv[4] == "QS"){
            sort.quickSort();
        } else if (argv[4] == "SS"){
            sort.selectionSort();
        } else if (argv[4] == "IS"){
            sort.insertionSort();
        }*/
        return 0;
    } else{
        cout << "No ingresó la cantidad de parámetros correctos";
        return -1;
    }
}
