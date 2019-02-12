// Date:	Feb 7, 2019
// Author:	Javad Ebadi
// a code to convert temperature in Celsius and converts it to Kelvin


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
	cout<<"Please input temperature in Celsius:"<<endl;
	cin>>c;		//reads input to c
	double k = ctok(c);	//store return of ctok(c) to k (Kelvin value) 
	cout<<"Temperature in Kelvin:\t"<<k<<'\n';
	return 0;
}
