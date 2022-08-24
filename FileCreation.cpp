// Libraries
#include <iostream>
#include <string>
#include <bitset>
#include "FileCreation.h"
#include "fstream"

using namespace std;

// Take a number and convert it to binary
string FileCreation::intToBinary(int num){
    string toBinary;
    while(num != 0){
        toBinary = (num % 2 == 0 ? "0" : "1") + toBinary;
        num /= 2;
    }
    bitset<32> bitnumber(toBinary);
    toBinary = bitnumber.to_string();
    return toBinary;
}

// Fill the text file with number separate by "," calculating the space gave by the user
int FileCreation::fillNumbers(string filename, int Kilobytes){
    int numLimit = 32 * Kilobytes;
    long tmp;
    string binaryNum;
    fstream writeFile;
    writeFile.open(filename, ios::app);
    for (int i = 1; i <= numLimit; ++i) {
        tmp = rand()%(1-4294967295);
        binaryNum = intToBinary(tmp);
        if (i == numLimit){
            writeFile << binaryNum;
        } else{
            writeFile << binaryNum << ",";
        }
    }
    return 0;
}

// Create a new csv file
int FileCreation::createFile(string filename, int Kilobytes){
    string fileType;
    fileType = filename + ".txt";
    cout << "The file: " << fileType << " was successfully created" << endl;
    ofstream reader(fileType.c_str());
    reader.close();
    fillNumbers(fileType, Kilobytes);
}