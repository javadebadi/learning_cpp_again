#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <exception>

using namespace std;

void error(const string& s){
	cout<<s<<endl;
}

int main(){


	int i = 0;
	cin >> i;
	if (!cin) { 
		// we get here (only) if an input operation failed
		cout<<"Something is wrong!"<<endl;
		if (cin.bad()) error("cin is bad"); // stream corrupted: let’s get out of here!
		if (cin.eof()) {
			cout<<"EOF"<<endl;
			// no more input
			// this is often how we want a sequence of input operations to end
		}
		if (cin.fail()) {
			cout<<"FAIL"<<endl;
			// stream encountered something unexpected
			cin.clear();
			// make ready for more input
			// somehow recover
		}
	}

	return -1;
}
