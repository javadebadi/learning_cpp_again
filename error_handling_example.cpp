// Author: Javad Ebadi
// Date  : 24 Mar 2019
// an example of error handling  (Division by zero)

#include <iostream>
#include <exception>

using namespace std;

double Division(const double& a, const double& b){
	string msg1 = "Division by zero";
	string msg2 = "Division by one might be pointless";
	if( b == 0){
		throw msg1;
	}
	else if(b == 1){
		throw msg2;
	}
	else if(b == -1){
		throw "Something";
	}
	else{
		return a/b;
	}
}

int main(){
	int a = 100;
	int b = -1; //try b =0,1,-1 and other values to see the difference
	try{
		cout<<Division(a,b)<<endl;
	}
	catch(const string& msg1){
		cerr<<msg1<<endl;
	}catch(const string& msg2){
		cerr<<msg2<<endl;
	}catch(...){
		cerr<<"an ERROR!"<<endl;
	}
}
