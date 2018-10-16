#ifndef _STACK_H
#define _STACK_H
#include "LinkedList_char.h"

class Stack : public LinkedList{
	public:
	Stack();
	~Stack();
	void push(char value);
	int pop();
	int& top();
};

#endif