#pragma once
#include <iostream>

using namespace std;

class cell {
public:
	string word;
	string definition;
	cell* next;
	cell(string word, string def, cell* pNext = nullptr);
};

class LinkedList {
private:
	int size;
	cell* head;
public:
	LinkedList();
	void addEl(string word, string definition);
	void printDef(string word);
	int getSize();
	void clear();
};