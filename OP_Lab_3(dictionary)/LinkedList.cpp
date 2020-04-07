#include "LinkedList.h"

cell::cell(string word, string def, cell* pNext)
{
	this->word = word;
	this->definition = def;
	this->next = pNext;
}

LinkedList::LinkedList() {
	this->size = 0;
	this->head = nullptr;
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

void LinkedList::print() {
	cell* temp = this->head;
	while (temp != nullptr) {
		cout <<"Word: " << temp->word << endl << "Definition: " << temp->definition << endl;
		temp = temp->next;
	}
}

int LinkedList::getSize()
{
	return this->size;
}
