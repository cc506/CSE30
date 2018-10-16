#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter the size of a 2D array: ";
	cin >> size;
	if(size < 1 || size > 10)
		cout << "ERROR: Your array is too large! Enter 1 to 10. /n";

	int arr[size][size];
	int count = 0;
	for(int i = 0; i < size ; i++){
		int x= i+1;
		cout << "Enter the values in the array for row " << x << ",separated by a space, and press enter:";
		for(int j = 0; j < size; j++){
			cin >> arr[i][j];
			if(arr[i][j] < 0)
			{
				count++;
			}
		}
	}

	if(count == 0){
	cout << "All values are non-negative" << endl;
	}
	else{
	cout << "There are " << count << " negative values!" << endl;
	}

	return 0;
}
