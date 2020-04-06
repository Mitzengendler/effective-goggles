#include "HashFunction.h"

void HashFunc::hashCalc(string str) {
    int hashVal = 0;
    int len = str.length();
    for (int i = 0; i < len; i++ ) {
        this->hash += str[i];
    }
}

void HashFunc::printHash()
{
    cout << this->hash;
}
