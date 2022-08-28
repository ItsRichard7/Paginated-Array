// Libraries
#include <iostream>
#include <string>
#include "FileCreation.h"
#include <fstream>
#include <sstream>

using namespace std;

// Fill the text file with number separate by "," calculating the space gave by the user
int FileCreation::fillNumbers(string filename, int Kilobytes){
    filename += ".csv";
    string filePath = "/home/itsrichard/Proyectos C++/Tarea Extraclase 1/Paginated-Array/TestFiles/" + filename;
    int numLimit = (256) * Kilobytes; // Used (256 / 2) ints because we need to save the number and also their direccion in the array so for create an array with 1 kb of memory used divide the number for 2
    int tmp;
    string binaryNum;
    fstream writeFile;
    writeFile.open(filePath, ios::app);
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

int FileCreation::convertIntFile(string filename) {
    string pathIntFile = "/home/itsrichard/Proyectos C++/Tarea Extraclase 1/Paginated-Array/TestFiles/" + filename;
    filename.erase(filename.end()-4, filename.end());
    string newfile = filename + "Binary.bin";
    string pathBinaryFile = "/home/itsrichard/Proyectos C++/Tarea Extraclase 1/Paginated-Array/FilesBinary/" + newfile;
    cout << newfile << endl;
    string line, word;
    fstream intFile(pathIntFile, ios::in);
    ofstream binaryFile;
    binaryFile.open(pathBinaryFile, ios::binary);
    if (intFile.is_open()){
        while (getline(intFile, line)) {
            stringstream str(line);
            while (getline(str, word, ',')) {
                cout << word << " ";
                int num = stoi(word);
                binaryFile.write(reinterpret_cast<const char *>(&num), sizeof(num));
            }
        }
    }
    binaryFile.close();
    return 0;
}

// Create a new csv file
int FileCreation::createFileCSV(string filename){
    filename += ".csv";
    string folderPath = "/home/itsrichard/Proyectos C++/Tarea Extraclase 1/Paginated-Array/TestFiles/" + filename;
    cout << "The file: " << filename << " was successfully created" << endl;
    ofstream reader;
    reader.open(folderPath);
    reader.close();
    return 0;
}