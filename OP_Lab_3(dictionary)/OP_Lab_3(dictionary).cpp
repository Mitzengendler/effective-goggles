#include <iostream>
#include <string>
#include "HashTable.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    string word;
    string def;
    cout << "Enter word: ";
    getline(cin, word);
    cin.clear();
    cout << "Enter definition: ";
    getline(cin, def);

    HashTable a;

    a.addEl(word, def);

    cout << "Index 1: " << a.hashFun(word) << endl;

    cout << "Enter word: ";
    getline(cin, word);
    cin.clear();
    cout << "Enter definition: ";
    getline(cin, def);

    a.addEl(word, def);

    cout << "Index 2: " << a.hashFun(word) << endl;

    a.printEl(word);
}