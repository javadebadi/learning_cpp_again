//============================================================================
// Name        : Exe 02.cpp
// Date		   : 06/20/2017
// Author      : Javad Ebadi
// Version     :
// Copyright   : 
// Description : A program that takes two pointers as inputs
//				and returns an array which contains values that
//				that were stored in memory which was allocated
//				to these pointers
//============================================================================

#include <iostream>
using namespace std;


//prototypes
void arrayBuilder(float* ptr1, float* ptr2, float array[]);


//main program
int main() {

	//defines a pointer ptrx and stores value in the memory place which is allocated to this pointer
	float* ptrx = new float(0.00);
	float* ptry = new float(1.25);
	//defines an array that will be used as an argument in a function below (arrayBuilder)
	float a[2];
	//loop counter
	int i=0;


	//A function that takes two pointers and an array is an input
	//and puts pointers values in the array




	//using arrayBuilder function to build an array from two pointer
	arrayBuilder(ptrx, ptry, a);
	//prints the values of the array a which is build by arrayBuidler
	for(i=0; i<2; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}



	return 0;

}



//Functions definition
void arrayBuilder(float* ptr1, float* ptr2, float array[]){


	*array = *ptr1;
	++array;
	*array = *ptr2;

	return ;


}
