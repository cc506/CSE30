#include <iostream>
using namespace std;
int main()
{
	int array[100], size;
	bool found = false;
	cout << "Enter the size of the array: ";
	cin >> size;

	if(size <= 0 || size > 100){
	cout << "ERROR: you enetered an incorrect value for the array size \n";
	}

	cout << "Enter the numbers in the array, separated by a space, and press enter:";
	for(int i =0; i < size; i++){
	cin >> array[i];
	}

	int v = 0;
	cout << "Enter a number to search for in the array: ";
	cin >> v;

	int check = 1;
	int y = 0;
	for(int x = 0; x < size; x++){
		if(v == array[x]){
		y = x;
		found = true;
		break;
		}
		else{
		check++;
		}
	}
	if (found)
	cout << "Found value " << v << " at index " << y << " , which took " << check << " checks."<< endl;
	else
	cout << "The value " << v << " was not found in the array!" << endl;

	if(check == 1){
	cout << "We ran into the best case scneario!" << endl;
	}
	if(check == 5){
	cout << "We ran into the worst case scneario!" << endl;
	}
	return 0;
}
