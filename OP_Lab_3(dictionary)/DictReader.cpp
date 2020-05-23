#include "DictReader.h"

void fillDict(HashTable x)
{
    ifstream file;
    string word;
    string definition;
    file.open("dict_processed.txt");

    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, word, ';');
            getline(file, definition, '\n');
            x.addEl(word, definition);
        }
        file.close();
    }
    else {
        cout << "Error!" << endl;
    }
}