//============================================================================
// Name        : Exe20.cpp
// Author      : Javad Ebadi
// Date........: 5/24/2017
//A program to check that if a given number is a Triangular number or not
//============================================================================



#include <iostream>
#include <cmath>


using namespace std;

//Prototype
//Functions Declaration
void isTriangular();




//main program

int main() {



	isTriangular();

	return 0;
}






//Functions Definition

void isTriangular(){

	int number=0;
	int n=0;
	int i=0;

	cout<<"Please enter a number: "<<endl; //asks user to enter a number
	cin>>number; //taking number as input from user


	if(number <= 0){
		//Checks sign of the given number
		//If it is negative prints that it is NOT a Triangular number and exits
		cout<<"It is NOT a Triangular number"<<endl;
		return;
	}



	n = number; //sets n = the given number
	for (i=0; i<number; i++){

		n -= i; //takes n to n-i, if n is a Triangular number at some point it should reach 0

			if (n == 0) {
				cout<<number<<" is a Triangular number"<<endl;
				return;
			}
			else if (n<0){
				cout<<number<<" is NOT a Triangular number"<<endl;
				return;
			}
	}
}
