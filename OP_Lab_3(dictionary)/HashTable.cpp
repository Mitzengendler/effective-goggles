#include "HashTable.h"

HashTable::HashTable()
{
    size = 5000000;
    linkedArr = new LinkedList[size];
}

HashTable::~HashTable() {
    delete[] linkedArr;
}

int HashTable::hashFun(string str) {
    int hashVal = 0;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        hashVal += str[i];
    }
	return hashVal;
}

void HashTable::addEl(string word, string def) {
    linkedArr[hashFun(word)].addEl(word, def);
}

void HashTable::printEl(string word) {
    linkedArr[hashFun(word)].printDef(word);
}
