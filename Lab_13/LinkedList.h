#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include <cstddef>
using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T> class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};
template<class T>
LinkedList<T>::LinkedList()
{
	first = NULL;
	last = NULL;
}
template<class T>
LinkedList<T>::~LinkedList()
{
	clear();
}
template<class T>
void LinkedList<T>::insertAtBack(T valueToInsert)
{
	Node<T>* NewNode= new Node<T>();
	NewNode->val= valueToInsert;
	NewNode->next = NewNode;
	if( first == NULL ) {
		first = NewNode;
		last = NewNode;
	} else {
		last->next = NewNode;
		last = NewNode;
	}
}
template<class T>
bool LinkedList<T> :: removeFromBack(){
		Node<T>* current, behind;
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
template<class T>
void LinkedList<T>::print() {
	Node<T>* n = first;
	while (n -> next != NULL){
		cout << n -> val << ",";					
		n = n -> next;							
	}
	if (n != NULL)							
		cout << n -> val << endl;
}
template<class T>
bool LinkedList<T>::isEmpty() {
	return first == NULL;
}
template<class T>
int LinkedList<T>::size() {
	Node<T>* n = first;
	int size = 0;
	while (n != NULL){
		size++;
		n = n -> next;
	}
	return size;
}
template<class T>
void LinkedList<T>::clear() {
	Node<T>* node = new Node<T>;
	if( first == NULL ) { // no node
	return;
	}
	if( first == last ) { // only one node
	delete [] first;
	first = NULL;
	last = NULL;
	}
while(first != NULL){
	first = node -> next;
	delete first;
	first = node;
	}
}	
template<class T>
void LinkedList<T> :: insertAtFront(T valueToInsert){
	Node<T>* node = new Node<T>;
	node -> val = valueToInsert;
	node -> next = first;
	first = node;
}
template<class T>
bool LinkedList<T> :: removeFromFront(){
		if(first == NULL){
		return false;
		}
		if(first == last){
		delete [] last;
		first = NULL;
		last = NULL;
		}
	Node<T>* n = first;
	first = n -> next;
	delete [] first; 
	return true;
}
#endif

