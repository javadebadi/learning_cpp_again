//Time Class
/* Every object of Time class stores 3 values
 * hour, minute and second
 */


#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Matrix{


	//friend function
	//overloading +
	friend Matrix operator+(const Matrix&, const Matrix&);
	//overloading *
	friend Matrix operator*(const Matrix&, const Matrix&);
	/*
	//overloading ==
	friend bool operator==(const Time&, const Time& );

*/




public:
	//overloading = assignment
	Matrix& operator=(const Matrix&);

	//constructor functions
	Matrix(double a = 0, double b = 0, double c = 0, double d = 0) : a11(a), a12(b), a21(c), a22(d){};
	//default matrix is 0 zero matrix

	//copy constructor
	Matrix(const Matrix& m): a11(m.a11), a12(m.a12), a21(m.a21), a22(m.a22){};


	//displayer functions
	void printA11();
	void printA12();
	void printA21();
	void printA22();
	void showMatrix();

	//Linear Algebra functions
	//Linear Algebra functions - determinant
	double det();//return determinant of the matrix
	//Linear Algebra functions - isSingular
	bool isNonSingular();//determines if the matrix is singular or not
	//Linear Algebra functions - inverse
	Matrix inverse();//returns inverse of the matrix






private:
	double a11, a12, a21, a22;

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



