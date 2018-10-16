#include "BTree.h"
#include <iostream>
using namespace std;

BTree::BTree()
{
	root = NULL;
}
BTree::~BTree()
{
	destroy_tree();
}
Node *BTree::BTree_root()
{
	return root;
}
void BTree::insert(int key){
if( root == NULL ) {
	root = new Node;
	root->key_value= key;
	root->left = NULL;
	root->right = NULL;
	} else {
	insert(key, root);
	}
}
void BTree::insert(int key, Node *leaf){
	if( key < leaf->key_value) {
		Node *subleaf1 = new Node;
		if( leaf->left == NULL ) {
			subleaf1 = leaf -> left;
			subleaf1->key_value=key;
			subleaf1->left = NULL;
			subleaf1->right = NULL;
		} else {
			insert(key, subleaf1);
		}
	} else {
		insert(key, leaf->right);
	}
}
Node *BTree::search(int key){
	return search(key, root);
}
Node *BTree::search(int key, Node *leaf){
if( leaf == NULL ) {
	return NULL;
	} else {
		if(key==leaf->key_value){
			return leaf;
		}
		else if(key < leaf -> key_value){
			search(key, leaf->left);
		} else {
			search(key, leaf->right);
		}
	}
}
void BTree::destroy_tree(){
	destroy_tree(root);
}
void BTree::destroy_tree(Node *leaf){
if( leaf != NULL ) {
	leaf->left=NULL;
	leaf->right=NULL;
	delete leaf;
	destroy_tree();
	}
}
