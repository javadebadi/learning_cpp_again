//============================================================================
// Name        : .cpp
// Author      : Javad Ebadi
// Date........: 5/28/2017
//A program that searches an array to find out if a given number is in it and
//if it is, then it return index of the that element of the array
//============================================================================



#include <iostream>
#include <cmath>


using namespace std;

int MAXSIZE=5;

//Prototype
//Functions Declaration
int indexFinder(int, int[]);


int main(){

	int a[]={10,20,30,40,50};// an array is declared and initialized

	int n=47;// an integer that we want to know that if it is in the array

	cout<<indexFinder(n, a);


	return 0;

}



//Functions Definition

//A function to search in elements of a[] and find the if n is one of the elements of that a[] or not
//if it is, then it returns index of the element that is equal to n
//if it is not, then it returns -1
int indexFinder(int n, int a[]){

	int i=0;

	for (i=0; i<MAXSIZE; i++){

		if(a[i]==n) return i; //If i is returned then a[i] is equal to n

	}

	return -1; //If this is returned then n is not one of a[]'s elements

}
