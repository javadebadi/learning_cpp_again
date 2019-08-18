//Title:
//Date: 5/28/2017
//Author: Javad Ebadi
//A function that finds the transpose of a given squared matrix



#include <iostream>

using namespace std;

const int dim=3;

//Prototype
void transpose(double [][dim]);
void printArray(double a[][dim]);





int main(){


	double a[dim][dim]={{1, 2,3},{4, 5, 6}, {7, 8, 9}};

	//printing the array
	cout<<"Here is an array: "<<endl;
	printArray(a);

	//replacing a by its transpose
	transpose(a);

	//printing the transposed array
	cout<<"Transpose of the array is: "<<endl;
	printArray(a);


	return 0;
}



//------------------------------------------
//The transpose function
void transpose(double a[][dim]){

	int i=0, j=0;


	for(i=0; i<dim; i++){
		for(j=i+1; j<dim; j++){
			swap(a[i][j], a[j][i]);
		}
	}
}
//-----------------------------------------

//----------------------------------------
//A function to print array
void printArray(double a[][dim]){

	int i=0, j=0;

	for(i=0; i<dim; i++){

		for(j=0; j<dim; j++){
					cout<<a[i][j]<<" ";
				}
		cout<<endl;
	}
}
