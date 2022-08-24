//
// Created by itsrichard on 23/08/22.
//

#ifndef PAGINATED_ARRAY_FILECREATION_H
#define PAGINATED_ARRAY_FILECREATION_H
#include <string>

using namespace std;

class FileCreation {

private:
    int fillNumbers(string filename, int Kilobytes);
public:
    string intToBinary(int num);
    int createFile(string filename, int Kilobytes);
};


#endif //PAGINATED_ARRAY_FILECREATION_H
