//============================================================================
// Name        : Exe 03.cpp
// Author      : Javad Ebadi
// Version     :
// Description : Class of person
// Date: 06/24/2017
//============================================================================


#include "Time.h"


//============================================================================
//main program
int main() {

	//variables that are used as arguments of increment function in
	//the below code
	int h=65;
	int m=61;
	int s=100;

	//build a Time object
	Time today(2,50,0);
	cout<<"A Time object with name \"today\" is built ..."<<endl;
	cout<<"today is constructed by values (2,50,0) ..."<<endl;


	//testing displayer function
	cout<<"=============================================="<<endl;
	cout<<"============= Testing showTime  =============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	today.showTime();
	cout<<endl;


	//testing setter function
	cout<<"=============================================="<<endl;
	cout<<"============= Testing resetTime  ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	today.resetTime();
	cout<<"If setPerson works properly, we will get "<<endl;
	cout<<"00:00:00 in continue ..."<<endl;
	cout<<endl;
	cout<<"Running showTime function to display time: "<<endl;
	today.showTime();
	cout<<endl;


	//testing increment function
	cout<<"=============================================="<<endl;
	cout<<"============= Testing increment  ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	cout<<"Before increment the time is: "<<endl;
	today.showTime();
	cout<<endl;
	cout<<"After increment the time "
			"by "<<h<<" hours "<<
			", "<<m<<" minutes "<<
			"and "<<s<<" seconds"<<" is: "<<endl<<endl;
	today.increment(h, m, s);
	today.showTime();
	cout<<endl;


	//testing Copy constructor function
	cout<<"=============================================="<<endl;
	cout<<"========= Testing Copy Constructor  =========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	cout<<"tomorrow is supposed to be"
			" a copy of today object "<<endl;
	Time tomorrow(today);
	cout<<"tomorrow: ";
	tomorrow.showTime();
	cout<<endl;


	//testing set Time object function
	cout<<"=============================================="<<endl;
	cout<<"============ Testing setTime  ==============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	tomorrow.setTime(10, 68, 69);
	cout<<endl;


	//testing overloaded == operator
	cout<<"=============================================="<<endl;
	cout<<"=========== Testing ==operator   ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	cout<<"today object is: ";
	today.showTime();
	cout<<endl;
	cout<<"tomorrow object is: ";
	tomorrow.showTime();
	cout<<endl;
	cout<<"Using overloaded== to compare today and tomorrow:"<<endl;
	cout<<"Result=> ";
	if (today == tomorrow) cout<<"today object is same"
			" as tomorrow object "<<endl;
	else cout<<"Two objects are NOT equal"<<endl;
	cout<<endl;

/*
	//testing overloaded >> input and << output operator
	cout<<"=============================================="<<endl;
	cout<<"======== Testing >> and <<operator   ========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	Time time1;
	cout<<"Please enter time1 like xx:xx:xx: "<<endl;
	cin>>time1;
	cout<<"time1 is: (using overloaded output<<) "<<endl;
	cout<<time1<<endl;
	cout<<"time1 is: (using showTime() function)"<<endl;
	time1.showTime();

*/

	//testing overloaded + output operator
	cout<<"=============================================="<<endl;
	cout<<"======== Testing + and * operator   ========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	Time time2(05,10,2);
	Time time3(00,10,3);


	cout<<"time2 is: \t";
	time2.showTime();
	cout<<"time3 is: \t";
	time3.showTime();
	cout<<"time2 + time3 using overloaded operator+ is: "<<endl;
	Time time4 = (time2 + time3);
	time4.increment(0,0,0);
	time4.showTime();
	cout<<"time2 * time3 using overloaded operator* is: "<<endl;
	Time time5 = (time2 * time3);
	time5.increment(0,0,0);
	time5.showTime();
	Time* ptrtime4;
	ptrtime4 = &time4;
	*ptrtime4 = time5;
	time4.showTime();



	//testing overloaded =
	cout<<"=============================================="<<endl;
	cout<<"============== Testing =operator ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	cout<<"We set time6 to be equal to time2, using \n "
			"overloaded assignment= operator"<<endl;
	Time time6 = time2;
	cout<<"time2 is: \t";
	time2.showTime();
	cout<<"time4 is: \t";
	time6.showTime();
	if (time2 == time6) cout<<"Two objects are equal"<<endl;
	else cout<<"Two objects are NOT equal"<<endl;


	//testing overloaded +=
	cout<<"=============================================="<<endl;
	cout<<"============== Testing +=operator ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	cout<<"time2 is: \t";
	time2.showTime();
	cout<<"time3 is: \t";
	time3.showTime();
	cout<<"Now using time2 += time3, the result for time2 is:"<<endl;
	time2 += time3;
	time2.showTime();

	//testing Destructor function
	cout<<"=============================================="<<endl;
	cout<<"============ Testing Destructor  ============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;

	return 0;
}
//============================================================================


