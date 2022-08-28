// Libraries
#include <iostream>
#include <string>
#include "FileCreation.h"
#include "fstream"

using namespace std;

// Fill the text file with number separate by "," calculating the space gave by the user
int FileCreation::fillNumbers(string filename, int Kilobytes){
    filename += ".csv";
    int numLimit = (256/2) * Kilobytes; // Used 256 / 2 ints because we need to save the number and also their direccion in the array so for create an array with 1 kb of memory used divide the number for 2
    long tmp;
    string binaryNum;
    fstream writeFile;
    writeFile.open(filename, ios::app);
    for (int i = 1; i <= numLimit; ++i) {
        tmp = rand()%(1-4294967295);
        if (i == numLimit){
            writeFile << tmp;
        } else{
            writeFile << tmp << ",";
        }
    }
    return 0;
}

// Create a new csv file
int FileCreation::createFileCSV(string filename){
    string fileType;
    fileType = filename + ".csv";
    cout << "The file: " << fileType << " was successfully created" << endl;
    ofstream reader(fileType.c_str());
    reader.close();
}