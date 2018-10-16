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
int binarySearchR(int *a[], int first, int last, int key){
	if(first > last){
		return -1;
	}
	  if (first == last) {
       if (a[first] == key) 
		   return first;
       else 
		   return -1;
   }
   int mid = (first + last) / 2;
   if (a[mid] == key){
	   return mid;
   }
   else if (a[mid] < key){ 
	   return binarySearch(a, mid + 1, hi, key);
   }
   else{
	   return binarySearch(a, lo, mid - 1, key);
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
		int index = binarySearchR(A, 0 , len - 1, key);
		 if (index == -1) {
           cout << "The key " << key << " was not found in the array!\n";
       } else {
           cout << "Found key " << key << " at index " << index << "!\n";
       }
	}
	fin.close();
}
