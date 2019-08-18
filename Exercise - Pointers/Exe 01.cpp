//Title: Exe 01
//Date: 06/19/2017
//Author: Javad Ebadi
//A function that searches for a given number in an array using
//pointers and returns the index of array if it finds the number
//and return null if it could not find the number



#include <iostream>
#include <cstring>

using namespace std;

int const dim=3;

//prototypes
void numFinder(int* array, int number, int& flag);


int main(){


	int array1[dim] = {1,2,2};
	int n=2;
	int flag1=0;

	numFinder(array1 , n,  flag1);

	return 0;
}



//Functions definition
void numFinder(int* array, int number, int& flag){
	//function takes an array and a number
	//the purpose of function is to return
	//the address of the number n if number
	//n exist in the array
	//if n was not one of the arrays elements
	//then in return null

	int i=0;
	//this variable is used as counter in the loop

	flag=0;
	//flag is used to make easy to print Null result
	//when n is not in the array


	for(i=0; i<dim; i++) {
		if(*(array + i) == number){
			cout<<"Address of first "<<number<<" in the "
					"array is: "<<array+i<<endl;
			flag=1;
		break ;
		}

	}

	if(flag == 0) cout<<"NULL"<<endl;
}

