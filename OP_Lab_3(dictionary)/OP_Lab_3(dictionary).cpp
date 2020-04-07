#include <iostream>
#include <string>
#include "HashFunction.h"
#include "LinkedList.h"

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
    LinkedList arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i].addEl(word, def);
    }
    arr[0].addEl("123", "456");
    for (int i = 0; i < 10; i++) {
        cout << "Index: " << i << endl;
        arr[i].print();
    }
    cout << "Size: " << arr[0].getSize();
}