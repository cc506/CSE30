#include <iostream>
#include <string>
using namespace std;
void combineStr(string& str, int& a)
{
if(a != 0){
	cout << "The resulting string is: ";

	for(int i = 0; i <= a; i++){
		if(i != a){
		cout << str;
		}
	}
	cout << endl;
}
}
int main()
{
	string word;
	int count;
	cout << "Enter a string: ";
	cin >> word;
	cout << "Enter a number of times: ";
	cin >> count;
	combineStr(word,count);
	return 0;
}

