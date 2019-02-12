// a program that converts from miles to kilometers
#include <iostream>

using namespace std;

int main(){
	double distance;
	cout<<"Please enter number of miles: \n";
	cin>>distance;
	distance *= 1.609;
	cout<<"The distance in kilometers: "<<distance<<endl;
	return 0;
}
