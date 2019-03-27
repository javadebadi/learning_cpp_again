#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void fill_vector(istream& ist, vector<int>& v, char terminator)
	// read integers from ist into v until we reach eof() or terminator
{
	for (int i; ist >> i; ) v.push_back(i);
	if (ist.eof()) return;	// fine: we found the end of file

	if (ist.bad()) cout<<"ist is bad"<<endl;; // stream corrupted; let’s get out of here!
	if (ist.fail()) { // clean up the mess as best we can and report the problem
		ist.clear();	// clear stream state,
				// so that we can look for terminator
		char c;
		ist>>c;		// read a character, hopefully terminator
		cout<<c<<endl;
		if (c != terminator) {// unexpected character
			ist.unget();	// put that character back
			ist.clear(ios_base::failbit); // set the state to fail()
		}
	}

}

int main(){
	vector<int> v;
	char terminator = 'q';
	fill_vector(cin, v, terminator);
	cout<<"v.size() = "<<v.size()<<endl; 
	fill_vector(cin, v, terminator);
	cout<<"v.size() = "<<v.size()<<endl;	
	return 0;
}
