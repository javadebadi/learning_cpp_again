//============================================================================
// Name        : .cpp
// Author      : Javad Ebadi
// Date........: 5/27/2017
//A program to read a 1 dimensional array and to print it
//============================================================================



#include <iostream>
#include <cmath>


using namespace std;

//Prototype
//Functions Declaration
void read(int a[], int n);
void print(int a[], int n);



int main(){



	int n=10;
	int myArray[n];



	read(myArray, n);
	print(myArray, n);

	return 0;

}



//Functions Definition

//Function to read a 1-Dimensional array
void read(int a[], int m){

	int i=0;

	while (i==0 || a[i-1]!=0){

		cout<<"a["<<i<<"]= ";
		cin>>a[i];
		i++;

	}

	return ;

};


//Function to print a 1-Dimensional array
void print(int a[], int m){

	int i=0;

	while (i==0 || a[i-1]!=0){

		cout<<"a["<<i<<"]= "<<a[i]<<endl;
		i++;

	}

	return ;

};
