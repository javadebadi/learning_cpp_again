//Title: Exe 06
//Date: 06/21/2017
//Author: Javad Ebadi
//A function that finds the number of bites in a string  using
//pointers



#include <iostream>


using namespace std;



//prototypes
int numberOfBites(char string1[]);

//main progrma
int main(){

	char s[] = "javad";

	cout<<"Number of bites in \""<<s<<"\" : "<<numberOfBites(s);

	return 0;
}



//Function defintion
int numberOfBites(char string1[]){

	//counter in the loop
	int i=0;

	for(i=0; i<1000; i++){
		if(*(string1 + i)=='\0') {
			return i;
		}

	}

}


