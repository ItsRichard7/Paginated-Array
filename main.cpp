//github token: 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

#include <iostream>
#include "FileCreation.h"

using namespace std;

int main() {
    FileCreation fileCreator;
    fileCreator.createFile("binaryNumber");
    cout << fileCreator.intToBinary(5555) << endl;
    return 0;
}
