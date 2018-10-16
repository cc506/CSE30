#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList :: LinkedList(){
	first = NULL;
	last = NULL;
}
LinkedList :: ~LinkedList(){
	clear();
}
void LinkedList :: insertAtBack(int valueToInsert){
	Node* node = new Node();
	node -> val = valueToInsert;
	node -> next = NULL;
	if(first == NULL){
		first = node;
		last = node;
	}
	else{
		last -> next = node;
	}
	last = node;
}
	
bool LinkedList :: removeFromBack(){
		Node *current, *behind;
		current = first;
		behind = first -> next;
		if(first == NULL){
		return false;
		}
		if(first == last){
		delete [] first;
		first = NULL;
		last = NULL;
		}
	while(behind -> next != NULL){
	current = behind;
	behind = behind -> next;
	}
	delete behind;
	current -> next = NULL;
	return true;	
}
void LinkedList::print() {
	Node * n = first;
	while (n -> next != NULL){
		cout << n -> val << ",";					
		n = n -> next;							
	}
	if (n != NULL)							
		cout << n -> val << endl;
}
bool LinkedList::isEmpty() {
	return first == NULL;
}
int LinkedList::size() {
	Node *n = first;
	int size = 0;
	while (n != NULL){
		size++;
		n = n -> next;
	}
	return size;
}
void LinkedList::clear() {
	Node* node = new Node();
	if( first == NULL ) { // no node
	return;
	}
	if( first == last ) { // only one node
	delete [] first;
	first = NULL;
	last = NULL;
	}
while(first != NULL){
	first = node -> next
	delete first;
	first = node;
	}
}	
void LinkedList :: insertAtFront(int valueToInsert){
	Node* node = new Node();
	node -> val = valueToInsert;
	node -> next = first;
	first = node;
}
bool LinkedList :: removeFromFront(){
		if(first == NULL){
		return false;
		}
		if(first == last){
		delete [] last;
		first = NULL;
		last = NULL;
		}
	Node* n = first;
	first = n -> next;
	delete [] first; 
	return true;
}
	

