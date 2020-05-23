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

    printRes(x);
}

void printRes(HashTable x)
{
    string word;
    cout << "Type your word here(or '0' to stop the program): ";
    while (word != "0") {
        getline(cin, word);
        vector<string> line;
        if (word == "0") {
            break;
        }
        //
        string input = word;
        istringstream ss(input);
        string token;

        while (getline(ss, token, ' ')) {
            line.push_back(token);
        }
        //
        for (int i = 0; i < line.size(); i++) {
            
            word = toUpper(line[i]);
            x.printEl(word);
        }
        cout << "And another one: ";
    }
    cout << "Fin.";
    exit(0);
}

string toUpper(string word) {
    for (int i = 0; i < word.length(); i++) {
        word[i] = toupper(word[i]);
    }
    return word;
}