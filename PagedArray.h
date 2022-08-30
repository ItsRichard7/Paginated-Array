#ifndef PAGINATED_ARRAY_PAGEDARRAY_H
#define PAGINATED_ARRAY_PAGEDARRAY_H

#include <iostream>
#include <string>

using namespace std;

class PagedArray {

public:
    PagedArray(string text_file);

    int operator [] (int pos);

    int saveArray();

    int printArray();
private:
    string textfile;
    string binaryfile;

    string pathBinary;
    int size;
    int last_page;
    int pagesInMemory[6];

    int Pages[6][256];

    int loadFirstPages();

    int loadPage(int pagePos, int pageNum);

    int writePage(int pagePos, int pageNum);

    int getNumber(int pos);
};


#endif //PAGINATED_ARRAY_PAGEDARRAY_H
