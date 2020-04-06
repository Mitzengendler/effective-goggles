#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class HashFunc {
private:
	int hash = 0;
public:
	void hashCalc(string word);
	void printHash();
};