#include <iostream>
#include <string>
#include "HashTable.h"
#include "DictReader.h"

using namespace std;

int main()
{
    cout << "Hello user1!\n";
    cout << "Please wait when dictionary will be loaded.\n";
    HashTable a;

    fillDict(a);
}
