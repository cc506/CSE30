#ifdef TIME_H
#define TIME_H
class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time();
	Time(int hours, int minutes, int seconds);
	setTime(int hours, int minutes, int seconds);
	~Time();
	
	int getHours();
	int getMinutes();
	int getSeconds();
	
	void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(int seconds);
}
#endif	
