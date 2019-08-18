//Time Class
/* Every object of Time class stores 3 values
 * hour, minute and second
 */


#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Time{

	//friend functions
	//overloading *, +, -, /
	//overloading +
	friend Time operator+(const Time& t1, const Time& t2);
	//overloading *
	friend Time& operator*(const Time&, const Time&);
	//overloading <, >, <=, >=, ==, !=
	//overloading ==
	friend bool operator==(const Time&, const Time& );






public:
	//Constructor Functions
	Time(int h = 0, int m = 0, int s = 0 ):
		hour(h), minute(m) , second(s) {};
		//The default values for Time object are 0,0,0
	//overloading =
	//overloading assignment operator
	Time& operator=(const Time&);
	//overloading +=
	Time& operator+=(const Time&);


	//getter functions
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	//displayer functions
	void printHour();
	void printMinute();
	void printSecond();
	void showTime();

	//setter functions
	//reset function
	void resetTime();//reset time to 00:00:00
	void setHour(int);//to set hour value
	void setMinute(int);//to set minute value
	void setSecond(int);//to set second value
	void setTime(int, int, int);//to set Time object completely

	//other functions
	//increment function
	void incrementHour(int);
	void incrementMinute(int);
	void incrementSecond(int);
	void increment(int , int , int );

	//Destructor function
	~Time(){
		//cout<<"The Time object is NOT ALIVE anymore ... :("<<endl;
	}




private:
	int hour, minute, second;

};


//===================================================
//======= OPERATOR OVERLOADING FOR Time CLASS========
//===================================================



/*
//input operator
istream &operator>>(istream &input, Time& t);
//output operator
ostream &operator<<(ostream &output, const Time& t);
*/



