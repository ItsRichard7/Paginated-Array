#ifndef PAGINATED_ARRAY_FILECREATION_H
#define PAGINATED_ARRAY_FILECREATION_H
#include <string>

using namespace std;

class FileCreation {

public:
    int fillNumbers(string filename, int Kilobytes);
    int convertIntFile(string filename);
    int createFileCSV(string filename);
};


#endif //PAGINATED_ARRAY_FILECREATION_H
