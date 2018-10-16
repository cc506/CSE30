#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
bool checkArraySort(int *a[], int length)
{
	for(int i = 0;i <= length; i++){
	if(a[i] > a[i+1]){
		return false;
	}
	else if(a[i] < a[i+1]){
		return true;
	}
	else{
		system("pause");
		exit(1);
	}
}
int binarySearchL(int *a[], int len, int key){
	int len = last + 1;
	for(int i= 0; i < len; i++){
		if(a[i] == key){
			return i;
		}
		return -1;
	}
}
int main(){
	ifstream fin;
	fin.open("words_in.txt");
	int len;
	fin >> len;
	int *arr = new int[len];
	for(int i = 0; i < n; i++){
		fin >> arr[i];
	}
	
	if(checkArraySort(arr,len)){
		int key;
		cout << "Enter key: ";
		cin >> key;
		int index = binarySearchR(A, len, key);
		 if (index == -1) {
           cout << "The key " << key << " was not found in the array!\n";
       } else {
           cout << "Found key " << key << " at index " << index << "!\n";
       }
	}
	fin.close();
}
