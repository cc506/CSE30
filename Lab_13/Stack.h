#ifndef _STACK_H
#define _STACK_H
#include "LinkedList.h"

template<class T>
class Stack : public LinkedList<T> {
	public:
	Stack();
	~Stack();
	void push(T value);
	T pop();
	T& top();
};
template<class T> 
Stack<T> ::Stack() :LinkedList()
{
	//DO Nothing
}
template<class T>
Stack<T> ::~Stack(){
	//DO nothing
}
template<class T>
void Stack<T> ::push(T value){
	: insertAtFront(value);	
}
template<class T>
int Stack<T> ::pop(){
	Node<T>* node = new Node<T>;
	int value_to_remove= node -> val;
	
	:removeFromFront();

	return value_to_remove;
}
template<class T>
int& Stack<T> ::top(){
	return first -> val;
}

#endif