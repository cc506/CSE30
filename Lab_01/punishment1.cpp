#include <iostream>
using namespace std;
int main()
{
	int count;
	cout << "Enter the number of lines for the punishment: ";
	cin >> count;
	if(count <= 0){
	cout << "You entered an incorrect value for the number of lines!" << endl;
	}
	else
	for(int i = 0 ; i< count; i++){
	cout << "I will always use objectoriented programming.";
	}
	return 0;
}

