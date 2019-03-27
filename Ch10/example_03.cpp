#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void skip_to_int()
{
	if (cin.fail()) {	// we found something that wasn’t an integer
		cin.clear();	// we’d like to look at the characters

		for (char ch; cin>>ch; ) {	// throw away non-digits
			if (isdigit(ch) || ch=='-') {
				cin.unget();	// put the digit back,
					// so that we can read the number
				cout<<"skip to int "<<ch<<endl;
				return;
			}
		}
	}
	cout<<"no input"<<endl;;	// eof or bad: give up
}


int get_int(const string& sorry){
	int n = 0;
	while(true){
		if (cin>>n) return n;
		cout<<sorry<<endl;
		skip_to_int();
	}
}

int get_int(int low, int high, const string& msg,const string& sorry){
	cout<<msg<<low<<" to "<<high<<" (inclusive):\n";
	
	while(true){
		int n = get_int(sorry);
		if (low<=n && n<=high) return n;
		cout	<<"sorry"
			<<n<<"is not in the ["<<low<<':'<<high
			<<"]range; please try again\n";
	}
}

int main(){

	int m = get_int("No number ");
	cout<<"m: "<<m<<endl;
	int n = get_int(1,10,"Please enter a number","Sorry, Not a number");
	cout<<"n: "<<n<<'\n';
	return 0;
}
