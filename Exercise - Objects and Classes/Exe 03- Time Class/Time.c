#include "Time.h"

//============================================================================
//Functions of Person Class

//Default constructor


//Copy constructor

//Destructor

//setter functions
	//reset function
	void Time::resetTime(){
		hour = 0;
		minute = 0;
		second = 0;
	}
	//set hour function
	void Time::setHour(int h){
		if(h>=0 && h<24) {
			hour= h;
			cout<<"hour is set successfully."<<endl;
		}
		else cout<<"Bad Number assignment of hour!!! \n \t"
				"The hour of the object is not modified."<<endl;

	}
	//set minute function
	void Time::setMinute(int m){
		if(m>=0 && m<60) {
			minute= m;
			cout<<"minute is set successfully."<<endl;
		}
		else cout<<"Bad Number assignment of minute!!! \n \t"
				"The minute of the object is not modified."<<endl;

	}
	//set second function
	void Time::setSecond(int s){
		if(s>=0 && s<60) {
			second = s;
			cout<<"second is set successfully."<<endl;
		}
		else cout<<"Bad Number assignment of second!!! \n \t"
				"The second of the object is not modified."<<endl;

	}
	//set Time object function
	void Time::setTime(int h, int m, int s){
		setHour(h);
		setMinute(m);
		setSecond(s);
	}



//getter functions
	int Time::getHour() const {return hour;};
	int Time::getMinute() const {return minute;};
	int Time::getSecond() const {return second;};

//displayer functions
	//print hour
	void Time::printHour(){
		if (hour < 10) cout<<"0"<<hour;
		else cout<<hour;
	}
	//print minute
	void Time::printMinute(){
		if (minute < 10) cout<<"0"<<minute;
		else cout<<minute;
	}
	//print second
	void Time::printSecond(){
		if (second < 10) cout<<"0"<<second;
		else cout<<second;
	}
	//print time as clocks
	void Time::showTime(){
		printHour();
		cout<<":";
		printMinute();
		cout<<":";
		printSecond();
		cout<<endl;
	}

//other functions
	//increment minute
	void Time::incrementMinute(int m){
		minute += m;
		while (minute > 59) {
			minute -=60;
			hour +=1;
		}
	}
	//increment second
	void Time::incrementSecond(int s){
		second += s;
		while (second > 59){
			second -= 60;
			minute += 1;
		}
	}
	//increment hour
	void Time::incrementHour(int h){
		hour += h;
		int temp=0;
		while (hour > 23){
			hour -= 24;
			temp++;
		}
		if (temp != 0) cout<<"The time is incremented to "<<
				temp<<" days later"<<endl;
	}
	//increment
	void Time::increment(int h, int m, int s){
		//The order of these functions are important
		//you should change the order of functions used
		//here. That will ruin the function functionality
		incrementSecond(s);
		incrementMinute(m);
		incrementHour(h);
	}


//overloading =
Time& Time::operator=(const Time& t1){
	hour = t1.hour;
	minute = t1.minute;
	second = t1.second;
	return *this;
}
//overloading +=
Time& Time::operator+=(const Time& t1){
	hour += t1.hour;
	minute += t1.minute;
	second += t1.second;
	return *this;
}

//=========================================================
//=========================================================
//============= OVERLOADING OPERATORS =====================
//=========================================================
//=========================================================


//Operator Overloading for objects of Time class
//overloading +
	Time operator+(const Time& t1, const Time& t2){
		Time t3(t1.hour + t2.hour,
				t1.minute + t2.minute,
				t1.second + t2.second);
		return t3;
	}
//overloading *
	Time& operator*(const Time& t1, const Time& t2){
		Time t3(t1.hour * t2.hour,
				t1.minute * t2.minute,
				t1.second * t2.second);
		return t3;
	}


//overloading ==
	bool operator==(const Time& t1, const Time& t2){
		return (
				(t1.getHour() == t2.getHour()) &&
				(t1.getMinute() == t2.getMinute()) &&
				(t1.getSecond() == t2.getSecond())
				) ;
	}


/*

//input operator >>
	istream &operator>>(istream& input, Time& t){
		Time t2;
		int hour, minute, second;
		char colon1, colon2;

		input>>hour>>colon1>>minute>>colon2>>second;
		t = t2.Time(hour, minute, second);
		return input;
	}
//output operator <<
	ostream &operator<<(ostream& output, const Time& t){
		return output<< t.getHour()<<":"<<
				t.getMinute()<<":"<<
				t.getSecond();
		//return output;
	}
*/
