#include <iostream>
#include "list.h"

List::List() {
	first = nullptr;
}

List::~List() {
	Node* p_temp = first;
	while(p_temp != nullptr) {
		Node* d_pointer = p_temp;
		p_temp = (*p_temp).next;
		delete d_pointer;
	}
	delete p_temp;
}

bool List::exists(int d) const {
	Node* p_temp = first;
	while(p_temp != nullptr) {
		if((*p_temp).value == d){
			return true;
		}
		p_temp = (*p_temp).next;
	}
	return false;
}

int List::size() const {
	Node* p_temp = first;
	int i = 0;
	while(p_temp != nullptr) {
		i++;
		p_temp = (*p_temp).next;
	}
	return i;
}

bool List::empty() const {
	return first == nullptr;
}

void List::insertFirst(int d) {
	Node* newFirst = new Node(d, first);
	first = newFirst;
}

void List::remove(int d, DeleteFlag df) {
	Node* p_temp = first;
	bool found = false;
	Node* prev_temp = nullptr;

	while(p_temp != nullptr && !found) {
		
		switch(df){
			case DeleteFlag::LESS: 
				if(d > (*p_temp).value){
					found = true;
				}
				break;
			case DeleteFlag::GREATER: 
				if(d < (*p_temp).value){
					found = true;
				}
				break;
			case DeleteFlag::EQUAL: 
				if(d == (*p_temp).value){
					found = true;
				}
				break;
		}
		if(found == true){
			if(prev_temp == nullptr){
				Node* temp = first;
				first = (*temp).next;
				delete temp;
			} else{
				Node* temp = p_temp;
				(*prev_temp).next = (*p_temp).next;
				delete temp;
			}
		}
		prev_temp = p_temp;
		p_temp = (*p_temp).next;

	}
}

void List::print() const {
	// std::cout << "hej\n";
	Node* p_temp = first;
	while(p_temp != nullptr) {
		std::cout << (*p_temp).value << "\n";  
		p_temp = (*p_temp).next;
	}
}

