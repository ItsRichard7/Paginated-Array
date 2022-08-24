//
// Created by itsrichard on 23/08/22.
//

#ifndef PAGINATED_ARRAY_FILECREATION_H
#define PAGINATED_ARRAY_FILECREATION_H
#include <string>

using namespace std;

class FileCreation {

private:
    int fillNumbers(int BytesFile);
public:
    string intToBinary(int num);
    int createFile(string filename);
};


#endif //PAGINATED_ARRAY_FILECREATION_H
