#include <iostream>
#include "FileCreation.h"
#include "SortAlgorithms.h"
#include "BinaryTraductor.h"

using namespace std;

int main(int args, char** argv) {
    FileCreation fileCreator;
    fileCreator.convertIntFile("1KB.csv");
    return 0;
}
