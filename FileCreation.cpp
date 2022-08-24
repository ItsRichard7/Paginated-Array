// Libraries
#include <iostream>
#include "FileCreation.h"
#include "fstream"
#include <string>

using namespace std;

// Fill the text file with number separate by "," calculating the space gave by the user
int FileCreation::fillNumbers(int BytesFile){
    return 0;
}

// Take a number and convert it to binary
int FileCreation::intToBinary(){
    return 0;
}

// Create a new csv file
int FileCreation::createFile(string filename){
    string fileType;
    fileType = filename + ".csv";
    cout << "The file: " << fileType << " was successfully created" << endl;
    ofstream reader(fileType.c_str());
    reader.close();
}