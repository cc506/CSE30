#include <iostream>
#include <cstdlib>
using namespace std;
void sortArr(int *x,int size, int n)
{
int temp;
for(int i = 1; i < size; i++){
		temp = x[i];
		int j = i-1;			
			while(x[j] > temp && n == 0){
			x[j+1] = x[j];
			j--;
			}
			while(x[j-1] > temp && n == 1){
			x[j+1] = x[j];
			j--;
			}
		x[j+1]=temp;
	}
}

int main()
{
	int size;
	int *array = new int[100];
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

	int choice;
	cout <<	"Sort in ascending (0) or descending (1) order? ";
	cin >> choice;
	sortArr(array,size,choice);

	if(choice == 0){
   	cout << "This is the sorted array in ascending order: ";
   	}
    	else{
    	cout << "This is the sorted array in descending order: ";
	}

	for(int i = 0; i < size; ++i){
    	cout << array[i] << " ";
    	}
    	cout << endl;
	return 0;
}

