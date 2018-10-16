#include <iostream>
using namespace std;
int main()
{
	int array[1000], size;
	cout <<"Enter the size of the array: ";
	cin >> size;

	if(size <= 0||size > 1000){
		 cout <<"ERROR: you entered an incorrect value for the array size \n";
	}

	cout <<"Enter the numbers in the array,separated by a space, and press enter: ";

	for(int i = 0; i < size; i++)
	cin >> array[i];

	for(int x = 0; x < size; x++){

		if(array[x]  < array[x+1])
		cout <<"This IS an increasing array! \n";
		else
		cout <<"This is NOT an increasing array! \n";
		break;
	}
	return 0;
}
