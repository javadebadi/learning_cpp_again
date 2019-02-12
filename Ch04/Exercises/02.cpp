// a program to define median of a sequence

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// a function that return median of a vector of doubles
double median(vector<double> values){
	
	double median{0.0};
	sort(values.begin(), values.end());	// sort the vector
        if(values.size() == 0){
                cout<<"the vector is empty. There isn't any median!"<<endl;
        }
        else if(values.size() == 1){
                median = values[0];
        }
        else if(values.size()%2 == 1){
                median = values[values.size()/2];
        }
        else{
                median = (values[values.size()/2 -1] + values[values.size()/2])/2.0;
        }

	
	return median;
}

// main function
int main(){
	
	vector<double> values={8,1,2,5,4,3};
	cout<<"median of sequence = "<<median(values)<<endl;

	return 0;
}
