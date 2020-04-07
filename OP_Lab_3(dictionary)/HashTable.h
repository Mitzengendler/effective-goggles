#pragma once
#include <iostream>
#include "LinkedList.h"

using namespace std;

class HashTable {
private:
	int size;
	LinkedList* linkedArr;
public:
	HashTable();
	~HashTable();
	int hashFun(string str);
	void addEl(string word, string def);
	void printEl(string word);
};