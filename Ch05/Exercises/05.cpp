// Date:	Feb 9, 2019
// Author:	Javad Ebadi
// a code to convert temperature in Celsius to Kelvin and vice verse
// this code has a check for the called functions (ctok and ktoc) to produce error when 
// illegal temperature is given by user

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

constexpr double min_Celsius = -273.15;	// the minimum value for a temperature in Celsius units

// a function to convert Celsius to Kelvin
double ctok(double c){
	double k = c - min_Celsius;
	if ( k < 0){

		cout<<"Error: Bad input! The temperture could not be less than "
		<<min_Celsius<<" Celsius!"<<endl;    //reports an error for bad input
		return -1;       // return -1 which indicates existing of an error
	}
	return k;
}

// a function to convert Kelvin to Celsius
double ktoc(double k){
        double c = k + min_Celsius;
        if ( k < 0){

                cout<<"Error: Bad input! The temperture could not be less than "
                <<"0 Kelvin!"<<endl;    //reports an error for bad input
                return -1;       // return -1 which indicates existing of an error
        }
        return c;
}

int main(){
	double d=0;	//declare input value (Celsius value)
	cout<<"Please enter temperature value:"<<endl;
	cin>>d;		//reads input to d

	char unit = '1';
	cout<<"Please enter temperature  units: Insert 'K' for Kelvin and 'C' for Celsius:"<<endl;
	cin>>unit;

	if ( unit == 'C'){
		double k = ctok(d);	//store return of ctok(c) to k (Kelvin value) 
		cout<<"Temperature in Kelvin:\t"<<k<<'\n';
	}
	else if (unit == 'K'){
		double c = ktoc(d);	//store return of ktoc to c (Celsius value)
		cout<<"Temperature in Celsius:\t"<<c<<'\n';
	}
	else{
		cout<<"Error! Bad Input!Unit is not Specified Correctly! Insert K or C for units."<<endl;
	}
	return 0;
}
