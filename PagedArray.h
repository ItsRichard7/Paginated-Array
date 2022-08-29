#ifndef PAGINATED_ARRAY_PAGEDARRAY_H
#define PAGINATED_ARRAY_PAGEDARRAY_H

#include <iostream>
#include <string>

using namespace std;

class PagedArray {

public:
    PagedArray(string text_file);
    int operator [] (int pos);

private:
    string textfile;
    string binaryfile;
    string pathBinary;

    int size;
    int last_paged;
    int pagesInMemory[6];
    int Pages[6][256];

    int loadPaged(int pagedPos, int pagedNum);

    int writePaged(int pagedPos);

    int getNumber(int pos);

    int savePaged(int pagedPos, int pagedNum);
};


#endif //PAGINATED_ARRAY_PAGEDARRAY_H
