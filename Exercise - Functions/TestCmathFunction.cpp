//============================================================================
// Name        : Exe4.cpp
// Author      : Javad Ebadi
// Date........: 5/24/2017
//A program to test that b^n = e^(n log(b))
//============================================================================

#include <iostream>
#include <cmath>


using namespace std;



int main() {

	double b=2;
	double n=0;

	for(n=0; n<10; n++) {


		cout<<"b^n = "<<pow(b,n)<<"\t e^(n log(b)) = "<<exp(n*log(b))<<endl;
	}




	return 0;
}
