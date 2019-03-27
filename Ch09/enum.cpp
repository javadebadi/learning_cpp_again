// Author: Javad Ebadi
// Date:   21 March 2019
// a program for testing concept of the enum class and operator overloading

#include <iostream>


enum class Month{
	Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

// increment month using overloaded ++ operator
Month operator++(Month& m){
	m = (m==Month::Dec)? Month::Jan : Month(int(m)+1);
	return m;
} 

using namespace std;

int main(){
	
	Month m = Month::Dec;
	cout<<"int(m) = "<<int(m)<<endl;
	++m;
	cout<<"int(++m) = "<<int(m)<<endl;
	return 0;
}
