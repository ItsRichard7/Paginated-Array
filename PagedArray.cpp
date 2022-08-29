#include "PagedArray.h"
#include <iostream>
#include <fstream>

using namespace std;

PagedArray::PagedArray(string text_file) {
    textfile = text_file;
    textfile.erase(textfile.end()-4, textfile.end());
    binaryfile = textfile + "Binary.bin";
    cout << binaryfile << endl;
    pathBinary = "/home/itsrichard/Proyectos C++/Tarea Extraclase 1/Paginated-Array/FilesBinary/" + binaryfile;
    size = sizeof(pathBinary);
    cout << "size of text file: " << size << endl;
    last_paged = 0;

    for (int i = 0; i < 6 and i < size; ++i) {
        pagesInMemory[i] = i + 1;
        loadPaged(i, i);
    }
}

int PagedArray::loadPaged(int pagedPos, int pagedNum) {
    pagesInMemory[pagedPos] = pagedNum;
    char numblock[32];
    ifstream binary(pathBinary, ios::in | ios::binary);
    cout << "llegue aqui :)" << endl;
    //int index = 0;
    while (binary.read(numblock, 32)) {
        uint32_t a;
        for (int i = 0; i < 32; ++i) {
            a = (a << 16) | (static_cast<unsigned int>(numblock[i]) &0xff);
        }
        cout << a << " ";
    }
    binary.close();
    return 0;
}

int PagedArray::writePaged(int pagedPos){
    return 0;
}

int getNumber(int pos){
    /*
    int paged = (int) (pos / 256);
    int position = pos % 256;
    for (int i = 0; i < 6; ++i) {

    }*/
    return 0;
}

int PagedArray::operator [] (int pos){
    ::getNumber(pos);
    return 0;
}

int PagedArray::savePaged(int pagedPos, int pagedNum) {
    return 0;
}