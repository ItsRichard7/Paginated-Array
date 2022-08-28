#include "PagedArray.h"
PagedArray::PagedArray(string text_file, string binary_file) {
    textfile = text_file;
    binaryfile = binary_file;
    size = sizeof(binary_file);

    for (int i = 0; i < 6; ++i) {
        pagesInMemory[i] = i + 1;
    }

    savePaged(1, 1);
    savePaged(2, 2);
    savePaged(3, 3);
    savePaged(4, 4);
    savePaged(5, 5);
    savePaged(6, 6);
}

int PagedArray::loadPaged(int pagedPos, int pagedNum, string binary_file) {
   return 0;
}

int PagedArray::writePaged(int pagedPos){
    return 0;
}

int getNumber(int pos){
    /*int pos = num % 256;
    int i = 1;
    while (pos =! pagesInMemory[i])*/
    return 0;
}

int PagedArray::operator [] (int pos){
    ::getNumber(pos);
    return 0;
}

int PagedArray::savePaged(int pagedPos, int pagedNum) {
    return 0;
}