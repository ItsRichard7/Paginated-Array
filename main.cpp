#include <iostream>
#include "FileCreation.h"
#include "SortAlgorithms.h"
#include "PagedArray.h"

using namespace std;

int main(int args, char** argv) {
    FileCreation fileCreator;
    SortAlgorithms sort;
    string textfile = argv[2];
    string sorted = argv[4];

    if (args == 7){
        textfile.erase(textfile.end()-6, textfile.end());
        int size = stoi(textfile);

        fileCreator.convertIntFile(argv[2]);
        PagedArray pagedArray(argv[2], argv[6]);

        if (sorted == "QS"){
            sort.quickSort(pagedArray,0, size * 256);
        } else if (sorted == "SS"){
            sort.selectionSort(pagedArray, size * 256);
        } else if (sorted == "IS"){
            sort.insertionSort(pagedArray, size * 256);
        }
        return 0;
    } else{

        fileCreator.createFileCSV("1KB");
        fileCreator.fillNumbers("1KB",1);

        fileCreator.createFileCSV("4KB");
        fileCreator.fillNumbers("4KB",4);

        fileCreator.createFileCSV("8KB");
        fileCreator.fillNumbers("8KB",8);

        fileCreator.createFileCSV("12KB");
        fileCreator.fillNumbers("12KB",12);

        fileCreator.createFileCSV("24KB");
        fileCreator.fillNumbers("24KB",24);

        fileCreator.createFileCSV("36KB");
        fileCreator.fillNumbers("36KB",36);


        cout << "No ingresó la cantidad de parámetros correctos";
        return -1;
    }
}
