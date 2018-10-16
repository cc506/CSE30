#include <iostream>
#include "stack.h"

using namespace std;
int main(){
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout<< “size() = ” << s1.size() << endl;
	cout<< “top() = ” << s1.top() << endl;
	cout<< “pop() = ” << s1.pop() << endl;
	s1.print();
}