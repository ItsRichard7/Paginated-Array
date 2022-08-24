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
int FileCreation::fillNumbers(int BytesFile){
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