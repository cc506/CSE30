#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int array[100], size;
	cout <<"Enter the size of the array: ";
	cin >> size;

	if(size <= 0 || size > 100){
	cout <<"ERROR: you enetered an incorrect value for the array size \n";
	system("pause");
	exit(1);
	}

	int temp;
	cout<< "Enter the numbers in the array, separated by a space, and press enter: ";
	for(int i = 0; i < size; i++){
	cin >> array[i];
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size-1; j++){

		if(array[j] > array[j+1]){
		temp = array[j];
		array[j] = array[j+1];
		array[j+1] = temp;
		}
		}
	}

	cout << "This is the sorted array in ascending order: ";
	for(int x = 0; x < size; x++){
	cout << array[x];
	}
	cout << endl;
	cout << "The alogrithm selected the minimum for the traverse of the array \n";
	return 0;
	exit(1);
}

