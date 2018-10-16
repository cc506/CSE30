#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

Stack::Stack() :LinkedList()
{
	//DO Nothing
}
Stack::~Stack(){
	//DO nothing
}
void Stack::push(int value){
	: insertAtFront(value);	
}
int Stack::pop(){
	Node* node = new Node();
	int value_to_remove= node -> val;
	
	:removeFromFront();

	return value_to_remove;
}
int& Stack::top(){
	return first -> val;
}