#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue():LinkedList()
{
	// do nothing
}
Queue::~Queue()
{
	// do nothing
}
void Queue::enqueue(int value){
	Node* node = new Node();
	node -> val = value;
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
int Queue::dequeue(){
	Node* n = new Node();
	if( isEmpty() ) {
	throw 0;
	}
	n = first;
	first = n -> next;
	return n -> val;
	delete first;
}
int& Queue::front(){
	Node* node = new Node;
	node = first;
	if(first == NULL){
		throw 0;
	}
	else{
	return node -> val;
	}
}
