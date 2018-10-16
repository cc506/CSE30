#include <iostream>
#include "time.h"
using namespace std;

Time::Time(int h, int m, int s)
{
	setHours(hours);
	setMinutes(minutes);
	setSeconds(seconds);
}

void Time :: setTime(int h, int m, int s);
{
	hours = h;
	minutes = m;
	seconds = s;
}

