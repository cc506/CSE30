#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int checkArraySort(string *arr[], int len)
{
	for(int i = 0;i <= len; i++){
	if(a[i] > a[i+1]){
		return -1;
	}
	else if(a[i] < a[i+1]){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int array_size = 20
	string *A = new string[array_size];
	int result = checkArraySort(A, array_size);
	
	if(result == -1){
		cout << "The array is sorted in descending order!" << endl;
	}
	else if(result == 1){
		cout << "The array is sorted in ascending order" << endl;
	}
	else{
		cout << "The array is not sorted" << endl;
	}
	system("pause");
	return 0;
}