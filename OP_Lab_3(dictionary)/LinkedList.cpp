#include "LinkedList.h"

cell::cell(string word, string def, cell* pNext) {
	this->word = word;
	this->definition = def;
	this->next = pNext;
}

LinkedList::LinkedList() {
	this->size = 0;
	this->head = nullptr;
}

LinkedList::~LinkedList()
{
	for (int i = 0; i < this->size;) {
		cell* temp = this->head;
		this->head = temp->next;
		this->size--;
		delete temp;
	}
}

void LinkedList::addEl(string word, string definition) {
	if (this->head == nullptr) {
		this->head = new cell(word, definition);
	}
	else {
		cell* current = this->head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = new cell(word, definition);
	}
	this->size++;
}

void LinkedList::printDef(string word) {
	cell* temp = this->head;
	while (temp != nullptr) {
		if (temp->word == word) {
			cout << "Word: " << temp->word << endl << "Definition: " << temp->definition << endl;
			break;
		}
		temp = temp->next;
	}
}

int LinkedList::getSize() {
	return this->size;
}