#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct Time{
	int hour;
	int minutes;
	int seconds;
}
bool getTimeFromUser(string *str){
	Time temp;
	string hour = str.substr(0,2);
	string minute = str.substr(3,5);
	string second = str.substr(6,8);
	string colon1 = str.find(":", 0);
	string colon2 = str.find(":", 4);

	temp.hour = atoi(hour.c_str());
	temp.minutes= atoi(minute.c_str());
	temp.seconds = atoi(second.c_str());

	if(temp.hour  >= 0 && temp.hour <= 23){
		if((temp.minutes >= 0 && temp. minutes <= 59) && (temp.seconds >=0 && temp.seconds <= 59)){
		 if((temp.hour <= 9 || temp.minutes <= 9) || temp.seconds <= 9){

		 }
		 return true;
		}
		else{
		return false;
		}
	}
	else{
	return false;
	}
void print24Hour(char timestructure[10]){
	cout <<"The Lecture starts at"<<startTime<< "Ends at" <<endTime;
}
int main()
{
	string startTime, endTime;
	cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
	getline(cin, startTime);
	if(getTimeFromUser(startTime)){
		print24Hour();
	}
	else{
	cout << "The start time entered is invalid!" << endl;
	}
	cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
	getline(cin, endTime);
	if(getTimeFromUser(endTime)){
		print24Hour();
	}
	else{
	cout << "The end time entered is invalid!" << endl;
	}
}
