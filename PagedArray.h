#ifndef PAGINATED_ARRAY_PAGEDARRAY_H
#define PAGINATED_ARRAY_PAGEDARRAY_H

#include <iostream>
#include <string>

using namespace std;

class PagedArray {
public:
    PagedArray(string text_file, string binary_file);
    int operator [] (int pos);
private:
    string textfile;
    string binaryfile;

    int size;
    int pagesInMemory[6];

    int Paged1[256];
    int Paged2[256];
    int Paged3[256];
    int Paged4[256];
    int Paged5[256];
    int Paged6[256];

    int loadPaged(int pagedPos, int pagedNum, string binary_file);

    int writePaged(int pagedPos);

    int getNumber(int pos);

    int savePaged(int pagedPos, int pagedNum);
};


#endif //PAGINATED_ARRAY_PAGEDARRAY_H
