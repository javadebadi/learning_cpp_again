#include "Matrix.h"

//============================================================================
//Functions of Matrix Class

//friend function
	//overloading +
	Matrix operator+(const Matrix& m1, const Matrix& m2){
		Matrix sum;
		sum.a11 = m1.a11 + m2.a11;
		sum.a12 = m1.a12 + m2.a12;
		sum.a21 = m1.a21 + m2.a21;
		sum.a22 = m1.a22 + m2.a22;
		return sum;

	}
	//overloading *
	//matrix product is what we want from operator * for matrices
	Matrix operator*(const Matrix& m1, const Matrix& m2){
		Matrix prod;
		prod.a11 = m1.a11 * m2.a11 + m1.a12 * m2.a21;
		prod.a12 = m1.a11 * m2.a12 + m1.a12 * m2.a22;
		prod.a21 = m1.a21 * m2.a11 + m1.a22 * m2.a21;
		prod.a22 = m1.a21 * m2.a12 + m1.a22 * m2.a22;
		return prod;
	}


//public functions

//overloading = assignment
	Matrix& Matrix::operator=(const Matrix& m){
		a11 = m.a11;
		a12 = m.a12;
		a21 = m.a21;
		a22 = m.a22;
		return *this;
	}


//Default constructor

//Copy constructor


//displayer functions
	void Matrix::printA11(){
		cout<<a11;
	}
	void Matrix::printA12(){
		cout<<a12;
	}
	void Matrix::printA21(){
		cout<<a21;
	}
	void Matrix::printA22(){
		cout<<a22;
	}
	void Matrix::showMatrix(){
		cout<<"------------"<<endl;
		cout<<"|"<<a11<<"\t"<<a12<<"|"<<endl;
		cout<<"|"<<a21<<"\t"<<a22<<"|"<<endl;
		cout<<"------------"<<endl;
	}
//Linear Algebra functions
//Linear Algebra functions - determinant
	double Matrix::det(){
		return (a11 * a22 - a12 * a21);
	}
//Linear Algebra functions - isSingular
	bool Matrix::isNonSingular(){
		//determines if the matrix is singular or not
		if (det() != 0)
			return true;
		else
			return false;
	}
//Linear Algebra functions - inverse
	Matrix Matrix::inverse(){
		//returns inverse of the matrix
		double temp=0;
		double fixDet = det(); //determinant of the matrix
		//is stored in fixDet because the matrix itself is changing
		//during operation of the code that we have written
		if (det() != 0.00000) {
			double invDet = 1/fixDet;
			temp = invDet * a11;
			a11 = invDet * a22;
			a22 = temp;
			a12 = - invDet * a12;
			a21 = - invDet * a21;
		}

		if (det() == 0.00000) cout<<"The inverse of the matrix does not exist. "
				"\n The matrix itself will be returned."<<endl;

		return *this;
	}



/*





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





//overloading ==
	bool operator==(const Time& t1, const Time& t2){
		return (
				(t1.getHour() == t2.getHour()) &&
				(t1.getMinute() == t2.getMinute()) &&
				(t1.getSecond() == t2.getSecond())
				) ;
	}


*/

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
