//============================================================================
// Name        : Exe 01.cpp
// Author      : Javad Ebadi
// Version     :
// Description : Class of points (x,y,z)
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;


//============================================================================
//Classes

class Point{

private:
	double x; double y; double z;

public:
	//Default constructor
	Point(){x=0; y=0; z=0;};

	//Copy constructor
	//the file which is an object of Point class will be copied to
	//new object by using this function
	Point(const Point& file){
		x = file.x;
		y= file.y;
		z = file.z;
	}

	//setter functions
	void setPoint(double xval, double yval, double zval){
		x = xval;
		y = yval;
		z = zval;
	}

	//displayer function
	void displayPoint(){
		cout<<"("<<x<<","<<y<<","<<z<<")";
	}

	//Other Functions
	//norm of the point
	double normPoint(){
				return sqrt(x*x + y*y + z*z);
	}
	//negate: finds the negative of the point
	void negatePoint(){
		x = -x;
		y = -y;
		z= -z;
	}
};

//============================================================================






//============================================================================
//main program
int main() {

	//build a point object
	Point myPoint;
	cout<<"Default Point"<<endl;
	myPoint.displayPoint();

	//blank line
	cout<<endl;
	cout<<endl;

	//set a point
	myPoint.setPoint(1, 2, -1);
	cout<<"setting Point by new values: ";
	myPoint.displayPoint();
	cout<<endl;

	//testing norm function
	cout<<"=============================================="<<endl;
	cout<<"=========== Testing Norm Function  ==========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<"\t Norm of this point = "<<myPoint.normPoint()<<endl;

	//testing negate function
	cout<<"=============================================="<<endl;
	cout<<"========== Testing Negate Function  =========="<<endl;
	cout<<"=============================================="<<endl;
	myPoint.negatePoint();
	cout<<"\t Negative of the point = ";
	myPoint.displayPoint();
	cout<<endl;

	//testing copy constructor
	cout<<"=============================================="<<endl;
	cout<<"========== Testing Copy Constructor =========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<"\t Building a copy of the Point: "<<endl;
	Point myPoint2(myPoint);
	cout<<"\t the Original Point: ";
	myPoint.displayPoint();
	cout<<endl;
	cout<<"\t the Copied Pointe: ";
	myPoint2.displayPoint();
	cout<<endl;


	return 0;
}
//============================================================================
