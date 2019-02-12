// a program with illegal names (to find out what kind of errors the compiler
// will encounter)

// authour: Javad Ebadi

#include <iostream>

using namespace std;

int main(){
	// using C++ keyword as the name of a variable
	int const=5;
	// error: expected unqualified-id before ‘=’ token int const=5;

	// using number as a first letter of a variable
	double 1book;
	// error: expected unqualified-id before numeric constant double 1book;

	//using characters which are not allowed as identifier's part
	bool adam@smith;
	//I think: the error depends on which character we have used

	return 0;
}
