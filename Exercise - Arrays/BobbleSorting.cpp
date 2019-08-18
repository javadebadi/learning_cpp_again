//============================================================================
// Name        : .cpp
// Author      : Javad Ebadi
// Date........: 5/28/2017
//A program that sorts elements of an array
//============================================================================



#include <iostream>
#include <cmath>


using namespace std;



//Prototype
//Functions Declaration
void print(int[], int);
void sort(int[], int);


int main(){

	int n=5;

	int a[]={10, 50, 20, 20, 50};



	sort(a,n);

	print(a, n);




	return 0;

}



//Functions Definition

//Function to print a 1-Dimensional array (Look at readPrintArray.cpp)
void print(int a[], int n){
	int i=0;
	for(i=0; i<n; i++){
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
	return ;
};


//Function uses Bobble Sorting algorithm to sort elements in the array
void sort(int a[], int n){

	int i=0, j=0;

	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(a[j]>a[j+1]) swap(a[j+1], a[j]);
		}
	}

}
