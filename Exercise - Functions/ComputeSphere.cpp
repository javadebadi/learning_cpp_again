//============================================================================
// Name        : Exe24.cpp
// Author      : Javad Ebadi
// Date........: 5/25/2017
//A program to compute volume and surface area of a sphere with given radius
//============================================================================



#include <iostream>
#include <cmath>


using namespace std;

//Prototype
//Functions Declaration
void ComputeSphere(double& volume, double& surface, double radius );




//main program

int main() {

	double r=1; // r: radius of the sphere
	double v=1; // volume of the sphere
	double s=1; //surface of the sphere

	//Taking radius of the sphere as an input
	cout<<"Please enter radius of the sphere: "<<endl;
	cin>>r;

	//Using ComputeSphere function to compute volume and surface of the sphere
	ComputeSphere(v, s, r);

	//Printing volume and surface are of the surface in the output
	cout<<"Volume of the sphere= "<<v<<endl;
	cout<<"Surface area of the sphere= "<<s<<endl;

	return 0;
}






//Functions Definition

//Function for computing volume and surface area of a sphere with a given radius
void ComputeSphere(double& volume, double& surface, double radius ){

			double const PI=3.14; //Pi number
			volume = (3./4)*PI*radius*radius*radius; //Volume formula for sphere
			surface = 4*PI*radius*radius; //surface formula for sphere

}
