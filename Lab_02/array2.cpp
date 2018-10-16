#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string word;
	cout <<"Enter the string to reverse: /n";
	cin >> word;
	int len = word.length();
	char arr[100];
	strcpy(arr, word.c_str()); //this was  step was taken from stack overflow

	for(int i = len-1 ; i >= 0; i--){
		cout << arr[i];
		cout << endl;
	}
	return 0;
}



