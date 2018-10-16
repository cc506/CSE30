#ifndef _QUEUE_H
#define _QUEUE_H

#include "LinkedList_char.h"

class Queue : public LinkedList{
	public:
		Queue();
		~Queue();
		void enqueue(char value);
		int dequeue();
		int& front();
};
#endif