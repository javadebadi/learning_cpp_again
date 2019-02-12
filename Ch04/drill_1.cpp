#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	double i1,i2;
	constexpr double precision = 1.0/100;
	while(cin>>i1>>i2){
		if(i1>i2){
			cout<<"the smaller value is: "<<i2<<endl;
			cout<<"the larger value is:  "<<i1<<endl;
		}
		else if(i1<i2){
                        cout<<"the smaller value is: "<<i1<<endl;
                        cout<<"the larger value is:  "<<i2<<endl;
		}
		else{
			cout<<"the numbers are equal"<<endl;
		}

		if(fabs(i1-i2)< precision){
			cout<<"the numbers are almost equal"<<endl;
		}
	}
	return 0;
}
