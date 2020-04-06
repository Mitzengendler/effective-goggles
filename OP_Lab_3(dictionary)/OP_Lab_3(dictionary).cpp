#include <iostream>
#include <string>
#include "HashFunction.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    HashFunc a;
    string word;
    getline(cin, word);
    a.hashCalc(word);
    a.printHash();
}