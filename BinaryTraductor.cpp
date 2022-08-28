#include <string>
#include <iostream>
#include <bitset>
#include "BinaryTraductor.h"

using namespace std;

// Take a number and convert it to binary
string BinaryTraductor::intToBinary(string num) {
    int integer = stoi(num);
    string toBinary;
    while(integer != 0){
        toBinary = (integer % 2 == 0 ? "0" : "1") + toBinary;
        integer /= 2;
    }
    bitset<32> bitnumber(toBinary);
    toBinary = bitnumber.to_string();
    return toBinary;
}
