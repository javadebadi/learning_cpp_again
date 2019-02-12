// Author: Javad Ebadi
// Date  : 11 Feb 2019
// a program that takes integer numbers from user and computes sum of the N first given numbers
// if N is bigger than the amount of numbers given by user it reports and error message

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int compute_sum(vector<int> values, int N_values){
	int sum{0};	// a variable to store sum of first N_values element in values vector

	if ( values.size() < N_values){
		cout<<"EROOR! The number of given numbers is less than the number needed to be added!"<<endl;
		return -1;
	}
	for(int i=0; i<N_values; i++){
		sum += values[i];
	}
	return sum;
}

int main(){

	int N_values{0}; // a variable to store the number of values we want to consider in the calculation
	cout<<"Please enter the number of values you want to sum:"<<endl;
	cin>>N_values;

	cout<<"Please enter some integers (press '|' to storp):"<<endl;
	int value{0};
	vector<int> values;
	while(cin>>value){			// store integer values from input sream to value until '|' character is given
		values.push_back(value);	// store the value in a vector of int called values
	}

	int sum{compute_sum(values, N_values)};
	cout<<"The sum of the firts "<<N_values<<" numbers (";
	for(int i=0; i<N_values; i++){
		cout<<" "<<values[i];
	}
	cout<<" ) is "<<sum<<endl;
	return 0;

}
