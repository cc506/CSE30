#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	int count = 0;
	string temp;
	ifstream myfile_in;
	myfile_in.open ("words_in.txt");

	if(!myfile_in){
		cout << "File does not exist" << endl;
		system("pause");
		exit(1);
	}

	while(!myfile_in.eof()){
		myfile_in >> temp;
		count++;
	}

	string *words = new string[count];
	ofstream myfile_out;
    myfile_out.open ("words_out.txt");
	int index = 0;

	while(!myfile_in.eof() && index < count){
		myfile_in >> temp;
		words[index]=temp;
		myfile_out << words[index] << endl;
		index++;
	}
	myfile_out.close();
	myfile_in.close();
	system("pause");
	return 0;
}
