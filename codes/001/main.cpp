/*
Author      : Javad Ebadi
Date        : 29 Mar 2019
Description : A program that produces the sum of all the numbers in
              a file of whitespace-separated integers.

Assumptions about input: we assume that the text file contains 
			 either whitespace or integers. 
			 If the input was not in this form the program exits 
			 and prints and error message.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void fail_error(ifstream& ist, const string& file_name){
                cout<<"ERROR: fail()"<<endl;
                cout<<"the file "<<file_name<<" must contain "
                        <<"just integers and whitespaces!"<<endl;
                ist.clear();    // make istream available again
                char ch;
                ist>>ch;        // read the character where 
                                // the problem has happend
                cout<<"The error happend on char "<<ch<<endl;
                ist.close();

}

void sum(const string& file_name){
	ifstream ist{file_name};// create input stream from file
	if(!ist){		//check that file is read correctly
		cout<<"can't read the "<<file_name<<endl;
		cout<<"exit the program!"<<endl;
		return;
	}

	int n{0};
	int sum{0};

	while(ist>>n){
		sum += n;
	}
	
	if( !ist.eof() && ist.fail()){	// check that file is failed in 
					// this fail is not because of EOF
		fail_error(ist, file_name);
		return;
	}
	else{
		cout<<"sum of integers in "<<file_name<<" = "<<sum<<endl;		}
	ist.close();
	return;
}

void process_file(const string& file_name){
	cout<<"file : "<<file_name<<endl;
	sum(file_name);
	cout<<"================================"<<endl;
}

int main(){

	process_file("data_not.txt");	// a file which does not exists
	process_file("data.txt");	// an appropriate file
	process_file("data_bad.txt");	// a file with problematic character

	return 0;
}
