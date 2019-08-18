//============================================================================
// Name        : Exe 06.cpp
// Author      : Javad Ebadi
// Version     :
// Description : Class of person
// Date: 06/29/2017
//============================================================================


#include "Matrix.h"


//============================================================================
//main program
int main() {


	double m11 = 0.00000;
	double m12 = 0.00000;
	double m21 = 0.00000;
	double m22 = 1.00000;

	//testing constructor
	cout<<"=============================================="<<endl;
	cout<<"==== Testing Constructor and showMatrix  ====="<<endl;
	cout<<"=============================================="<<endl;
	cout<<"We build matrix M1 which is Identity matrix: "<<endl;
	Matrix M1(m11, m12, m21, m22);
	cout<<endl;
	M1.showMatrix();
	cout<<endl;

	//testing copy constructor
	cout<<"=============================================="<<endl;
	cout<<"========== Testing Copy Constructor =========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	Matrix M2(M1);
	cout<<"Matrix M2 is a copy of matrix M1:"<<endl;
	M2.showMatrix();
	cout<<endl;

	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"=============================================="<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"****** Testing Linear Algebra Utilities ******"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	//testing determinant function
	cout<<"=============================================="<<endl;
	cout<<"========= Testing determinant det() =========="<<endl;
	cout<<"=============================================="<<endl;


	cout<<"Determinant of M1 = "<<endl;
	cout<<M1.det();
	cout<<endl;
	cout<<endl;
	//testing isNonSingular function
	cout<<"=============================================="<<endl;
	cout<<"=========== Testing isNonSingular ============"<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;

	if (M1.isNonSingular() == true)
		cout<<"The matrix M1 is not singular"<<endl;
	else
		cout<<"The matrix M1 is singular"<<endl;
	cout<<endl;

	//testing isNonSingular function
	cout<<"=============================================="<<endl;
	cout<<"======== Finding inverse of a Matrix ========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;

	Matrix M3((M1.inverse()));
	M3.showMatrix();



	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"=============================================="<<endl;
		cout<<"**********************************************"<<endl;
		cout<<"******** Testing Overloaded Operators ********"<<endl;
		cout<<"**********************************************"<<endl;
		cout<<"=============================================="<<endl;
		cout<<endl;
		//testing overloaded + and *
		cout<<"=============================================="<<endl;
		cout<<"== Testing overloaded + and matrix product * ="<<endl;
		cout<<"=============================================="<<endl;
		cout<<endl;
		Matrix M4(1,2,3,4);
		cout<<"M4 = "<<endl;
		M4.showMatrix();
		Matrix M5(1,0,0,1);
		cout<<"M5 = "<<endl;
		M5.showMatrix();
		cout<<"Using overloaded + the M4 + M5 = "<<endl;
		(M4+M5).showMatrix();
		cout<<"Using overloaded * the M4*M5 = "<<endl;
		(M4*M5).showMatrix();

		//testing overloaded assignment =
		cout<<"=============================================="<<endl;
		cout<<"== Testing overloaded assignment = ==========="<<endl;
		cout<<"=============================================="<<endl;
		cout<<"M4 = "<<endl;
		M4.showMatrix();
		cout<<"We define M6 and set it M6 = M4"<<endl;
		Matrix M6(0,0,0,0);
		M6 = M4;
		cout<<"M6 = "<<endl;
		M6.showMatrix();
		cout<<endl;
		cout<<"Now we set define M1 = M5 = M6. The result is: "<<endl;
		M1 = M5 = M6;
		cout<<"M6 = "<<endl;
		M6.showMatrix();
		cout<<"M5 = "<<endl;
		M5.showMatrix();
		cout<<"M1 = "<<endl;
		M1.showMatrix();

	return 0;
}
//============================================================================


