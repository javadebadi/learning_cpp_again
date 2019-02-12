// Date:	Feb 7, 2019
// Author:	Javad Ebadi
// a code to convert temperature in Celsius and converts it to Kelvin
// this code has a check in main program to produce error when illegal
// temperature is given by user

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// a function to convert Celsius to Kelvin
double ctok(double c){
	double k = c + 273.15;
	return k;
}

int main(){
	double c=0;	//declare input value (Celsius value)
	double min_Celsius = -273.15;	// the minimum value for a temperature in Celsius units
	cout<<"Please input temperature in Celsius:"<<endl;
	cin>>c;		//reads input to c
	if( c < min_Celsius ){
		cout<<"Error: Bad input! The temperture could not be less than "
		<<min_Celsius<<endl;	//reports an error for bad input
		return 0;	//exit the main porgram in case of error
	}
	double k = ctok(c);	//store return of ctok(c) to k (Kelvin value) 
	cout<<"Temperature in Kelvin:\t"<<k<<'\n';
	return 0;
}
