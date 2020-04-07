#include <iostream>
#include <string>
#include "HashTable.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    string word;
    string def;


    int i = 15;
    HashTable a;
    while (i != 0) {
        cout << "Enter word: ";
        getline(cin, word);
        cin.clear();
        cout << "Enter definition: ";
        getline(cin, def);

        a.addEl(word, def);

        cout << "Index : " << a.hashFun(word) << endl;

        a.printEl(word);

        i--;
    }
}
