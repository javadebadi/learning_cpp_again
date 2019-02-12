// a program which reads a sequence of doubles into vector which is actually
// distances between two cities in a route
// computes the total distance
// finds the smallest and greates distance
// finds the mean distance between tow neighboring cities

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main(){
	vector<double> distances = {100,220,50,369,70,80,160};
	double small, large, mean, sum;

	// computes total distance (sum of neighboring distances)
	sum = 0;
	for(double dist: distances){
		sum += dist;
	}
	cout<<"Total distance:                                 "<<sum<<endl;

	// compute mean of the two neighboring cities distance
	mean = sum/distances.size();
	cout<<"Mean distance between two neighboring cities:   "<<mean<<endl;
	// compute smallest and largest of distance between two neighboring cities
	sort(distances.begin(),distances.end());
	small = distances[0];
	large = distances[distances.size()-1];
	cout<<"distance between two nearest cities:            "<<small<<endl;
	cout<<"distance between two farest cities :            "<<large<<endl;
	return 0;
}
